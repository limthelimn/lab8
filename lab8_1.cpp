#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double loan ,rate,amount;
    cout << "Enter initial loan: ";
    cin >> loan;
    cout << "Enter interest rate per year (%): ";
    cin >> rate;
    cout << "Enter amount you can pay per year: ";
    cin >> amount;


    cout << setw(13) << left << "EndOfYear#"; 
    cout << setw(13) << left << "PrevBalance"; 
    cout << setw(13) << left << "Interest"; 
    cout << setw(13) << left << "Total";
    cout << setw(13) << left << "Payment";
    cout << setw(13) << left << "NewBalance";
    cout << "\n";

    int year = 1;
    double inter,total,newbalance;
    double balance = loan,payment = amount;

    for(int i = 0;balance > 0;i++){
        inter = (rate*balance)/100;
        total = balance + inter;

        if(total < payment){
            payment = total;
    	}
        newbalance = total - payment;

        cout << setw(13) << left << setprecision (2) << year++;
        cout << setw(13) << left << setprecision (2) << fixed << balance;
        cout << setw(13) << left << setprecision (2) << fixed << inter;
        cout << setw(13) << left << setprecision (2) << fixed << total;
        cout << setw(13) << left << setprecision (2) << fixed << payment;
        cout << setw(13) << left << setprecision (2) << fixed << newbalance << endl;
        balance = newbalance;
    }
    return 0;
}