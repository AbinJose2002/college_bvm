#include <iostream>
using namespace std;
class ATM{
    public:
        char inp;
        int acno;
        float availbal=30000, wimit, freew;
    ATM(){
        freew = 0;
        wimit = 20000;
    }
    void withdrwal(int amt){   
        if(amt<wimit){
            if(availbal>=amt){
                availbal=availbal-amt;
                //cashwithdraw(amt);
                cout<<"please collect the cash\n";
                bal();
            }
        }else
        {
            cout<<"Entered amount is off limit. Transaction Failed";
        }
    }
    //for balance view...for mini statemnet
    void bal(){
        cout<<"Do you want to see your available balance(Y/N)";
        cin>>inp;
        if(inp=='Y' || inp=='y')
            cout<<"balance = "<<availbal<<endl;
    }
    //transfer form or decrease available balance
    void transfrom( int amt){
        availbal=availbal-amt;
    }
    //transfer fund to another account
    void transto( int amt)
    {
        availbal=availbal+amt;
    }
    //charge applied when atm used more than 4 time...2/- for each transaction
    void charge(){
        if ( freew > 4)
        {
            availbal = availbal - 2;
        }
        freew++;
    }
};
int main(){
    ATM a[15];
    int value, index, amt, toacno, x;
    char opt;
    cout<<"Hello";
    cout<<"\n-----";
    cout<<"\nenter your account number(100000-100010)\n";
    cin>>index;
    do{
        
        cout<<"select the options";
        cout<<"\n1. withdraw\t2.deposit\n3.transfer\t4.mini statement\nYour option : ";
        cin>>value;
        //account number checking...for range
        if(index>100000 && index<100010){
            index=index-100000;
            a[index].charge();
            switch(value){
                //withdrawal
                case 1: cout<<"enter the amount ";
                        cin>>amt;
                        a[index].withdrwal(amt);
                        break;

                //depositing 
                case 2: cout<<"enter the amount ";
                        cin>>amt;
                        a[index].transto(amt);
                        a[index].bal();
                        break;        

                //transfer
                case 3: cout<<"enter the amount ";
                        cin>>amt;
                        cout<<"enter the account number to be transfered";
                        cin>>toacno;
                        toacno = toacno - 100000;
                        a[index].transfrom(amt);
                        a[toacno].transto(amt);
                        a[index].bal();
                        break;
                //mini-statement
                case 4: a[index].bal();
                        break;

                default:cout<<"enter valid input";
            }
        }else{
            cout<<"Entered account number is invalid. Transaction Failed";
        }
        cout<<"Do you want to repeat the process(y/n)?";
        cin>>opt;
        index=index+100000;
    }while(opt=='Y'||opt=='y');
    cout<<"Thank you for using our atm service.";
}