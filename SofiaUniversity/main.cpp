//#include <iostream>
//#include <iomanip>
//#include <cmath>
//using namespace std;
//
//double formattingNumber();
//void formattingNumberModified();
//int getPeriod(int number);
//
//int main() {
//    int number = floor(formattingNumber());
//    getPeriod(number);
//    //formattingNumberModified();
//}
//
//int getPeriod(int n) {
//    int rem = 1;
//    for (int i = 1; i <= n+1; i++)
//        rem = (10*rem) % n;
//
//    int d = rem;
//
//    int count = 0;
//    do {
//        rem = (10*rem) % n;
//        count++;
//    } while(rem != d);
//
//    return count;
//}
//double formattingNumber() {
//
//    double divisible;
//    cout<<"Please enter Divisible: ";
//    cin>>divisible;
//    cout<<endl;
//
//    double divider;
//    cout<<"Please enter Divider: ";
//    cin>>divider;
//    cout<<endl;
//
//    int N;
//    cout<<"Please enter the number after the point: ";
//    cin>>N;
//    cout<<endl;
//
//    cout.setf(ios::floatfield,ios::fixed);
//    cout<<setprecision(N)<<divisible / divider<<endl;
//}
//
//void formattingNumberModified() {
//    double formatting = formattingNumber();
//
//}
//
//

#include <iostream>
#include <iomanip>
#include <map>
using namespace std;
string getPeriod(int divisible, int divider, string &resultNumber);
string calculateFractionAndPeriod(int divisible, int divider);
int main() {

    int divisible;
    cout<<"Please enter Divisible: ";
    cin>>divisible;
    cout<<endl;

    int divider;
    cout<<"Please enter Divider: ";
    cin>>divider;
    cout<<endl;

    cout << calculateFractionAndPeriod(divisible, divider) << endl;

    string num = calculateFractionAndPeriod(divisible, divider);

    int prePeriodCount = 0;
    int periodCount = 0;

    int prePeriodStartIndex = num.find(".");

    string prePeriod = num.substr(prePeriodStartIndex+1);
    for(char& c : prePeriod) {
        if(c == '('){
            break;
        }
        prePeriodCount++;
    }

    int periodStartIndex = num.find("(");

    string period = num.substr(periodStartIndex+1);
    for(char& c : period){
        if(c == ')'){
            break;
        }
        periodCount++;
    }

    cout<<"Period: "<<periodCount<<endl;
    cout<<"Pre period: "<<prePeriodCount<<endl;
}

string calculateFractionAndPeriod(int divisible, int divider) {

    string resultNumber = "";

    if(divisible == 0){
        resultNumber = "0";
        return resultNumber;
    }
    if(divider == 0){
        resultNumber = "You can't divide by ZERO";
        return resultNumber;
    }

    int numberBeforePoint = divisible / divider;

    if(divisible < 0 || divider < 0){
        divisible = abs(divisible);
        divider = abs(divider);
    }

    resultNumber += to_string(numberBeforePoint);
    int formulaSign = 0;
    if ((divisible < 0) ^ (divider < 0)) {
        formulaSign = -1;
    } else {
        formulaSign = 1;
    }

    if (formulaSign == -1) {
        resultNumber += "-";
    }
    return getPeriod(divisible, divider, resultNumber);
}

string getPeriod(int divisible, int divider, string &resultNumber) {
    map<int, int> mapPeriodNumbers;

    if (divisible % divider == 0) {
        return resultNumber;
    } else {
        resultNumber += ".";
        int indexOfRepeating;
        int reminderNumber = divisible % divider;
        bool isRepeating = false;

        while (reminderNumber > 0 && !isRepeating) {
            if (mapPeriodNumbers.find(reminderNumber) != mapPeriodNumbers.end()) {
                indexOfRepeating = mapPeriodNumbers[reminderNumber];
                isRepeating = true;
                break;
            } else {
                mapPeriodNumbers[reminderNumber] = resultNumber.size();
            }
            reminderNumber = reminderNumber * 10;
            int tempNumber = reminderNumber / divider;
            resultNumber += to_string(tempNumber);
            reminderNumber = reminderNumber % divider;
        }
        if (isRepeating) {
            resultNumber += ")";
            resultNumber.insert(indexOfRepeating, "(");
        }
        return resultNumber;
    }
}