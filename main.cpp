#include <iostream>
// #include<conio.h>
#include <cstdio>
#include<string>

using namespace std;

int bnoM=0,bnoP=0,bnoG=0,bnoA=0;
double bamtM,bamtP,bamtG,bamtA,totalM=0,totalP=0,totalG=0,totalA=0;
double gtotal,pp,M_bal,P_bal,G_bal,A_bal;
char ch,ex;
string name;


int main()
{
//////////////// code for Mahesh //////////////////////

//        cout<< "Enter Your Name:>";
//        cin>>name;
    system("color 0A");
    cout << "Enter bills Amount of Mahesh:\n" << endl;
    lineM:bnoM++;

    cout<< "Bill No." <<bnoM << ":";
        cin>>bamtM;
        totalM= totalM+bamtM;
    cout<< "Do you have more bills? (y/n):>";
    cin>>ch;

        if(ch == 'Y' || ch == 'y')
        {
            goto lineM;
        }
        else
        {
            cout<< "*****************************************************************" <<endl;
            cout<< "*" << "\t\t\t\t\t\t\t\t" << "*" <<endl;
            cout<< "*" << "\t" << "Your Total No. of Bills are:" <<bnoM << "\t\t\t\t" <<"*" <<endl;
            cout<< "*" << "\t" << "Total Bill Amount of "<<bnoM << " Bills is:" <<totalM << "\t\t\t" <<"*" <<endl;
            cout<< "*" << "\t\t\t\t\t\t\t\t" << "*" <<endl;
            cout<< "*****************************************************************" <<endl;
            cout<< " " <<endl;

        }


//////////////// code for Prasad //////////////////////

//        cout<< "Enter Your Name:>";
//        cin>>name;
//    cout << "Enter bills Amount of " <<name <<":\n" << endl;
    system("pause");
    system("cls");
    system("color 0B");
    cout << "Enter bills Amount of Prasad:\n" << endl;
    lineP:bnoP++;

    cout<< "Bill No." <<bnoP << ":";
        cin>>bamtP;
        totalP= totalP+bamtP;
    cout<< "Do you have more bills? (y/n):>";
    cin>>ch;
        if(ch == 'Y' || ch == 'y')
        {
            goto lineP;
        }
        else
        {
            cout<< "*****************************************************************" <<endl;
            cout<< "*" << "\t\t\t\t\t\t\t\t" << "*" <<endl;
            cout<< "*" << "\t" << "Your Total No. of Bills are:" <<bnoP << "\t\t\t\t" <<"*" <<endl;
            cout<< "*" << "\t" << "Total Bill Amount of "<<bnoP << " Bills is:" <<totalP << "\t\t\t" <<"*" <<endl;
            cout<< "*" << "\t\t\t\t\t\t\t\t" << "*" <<endl;
            cout<< "*****************************************************************" <<endl;
            cout<< " " <<endl;
        }


//////////////// code for Gangesh //////////////////////
//
//        cout<< "Enter Your Name:>";
//        cin>>name;
//    cout << "Enter bills Amount of " <<name <<":\n" << endl;
    system("pause");
    system("cls");
    system("color 0C");
    cout << "Enter bills Amount of Gangesh:\n" << endl;
    lineG:bnoG++;

    cout<< "Bill No." <<bnoG << ":";
        cin>>bamtG;
        totalG= totalG+bamtG;
    cout<< "Do you have more bills? (y/n):>";
    cin>>ch;
        if(ch == 'Y' || ch == 'y')
        {
            goto lineG;
        }
        else
        {
            cout<< "*****************************************************************" <<endl;
            cout<< "*" << "\t\t\t\t\t\t\t\t" << "*" <<endl;
            cout<< "*" << "\t" << "Your Total No. of Bills are:" <<bnoG << "\t\t\t\t" <<"*" <<endl;
            cout<< "*" << "\t" << "Total Bill Amount of "<<bnoG << " Bills is:" <<totalG << "\t\t\t" <<"*" <<endl;
            cout<< "*" << "\t\t\t\t\t\t\t\t" << "*" <<endl;
            cout<< "*****************************************************************" <<endl;
            cout<< " " <<endl;
        }


//////////////// code for Arif //////////////////////

//        cout<< "Enter Your Name:>";
//        cin>>name;
//    cout << "Enter bills Amount of " <<name <<":\n" << endl;
    system("pause");
    system("cls");
    system("color 0D");
    cout << "Enter bills Amount of Arif:\n" << endl;
    lineA:bnoA++;

    cout<< "Bill No." <<bnoA << ":";
        cin>>bamtA;
        totalA= totalA+bamtA;
    cout<< "Do you have more bills? (y/n):>";
    cin>>ch;
        if(ch == 'Y' || ch == 'y')
        {
            goto lineA;
        }
        else
        {
            cout<< "*****************************************************************" <<endl;
            cout<< "*" << "\t\t\t\t\t\t\t\t" << "*" <<endl;
            cout<< "*" << "\t" << "Your Total No. of Bills are:" <<bnoA << "\t\t\t\t" <<"*" <<endl;
            cout<< "*" << "\t" << "Total Bill Amount of "<<bnoA << " Bills is:" <<totalA << "\t\t\t" <<"*" <<endl;
            cout<< "*" << "\t\t\t\t\t\t\t\t" << "*" <<endl;
            cout<< "*****************************************************************" <<endl;
            cout<< " " <<endl;
        }

 //////////////// code for Total //////////////////////

    gtotal = totalA + totalG + totalM + totalP; //Grand Total of month
    pp = gtotal/4; //Per person calculation
    A_bal = pp - totalA; //Arif's balance
    G_bal = pp - totalG; //Gangesh's balance
    M_bal = pp - totalM; //Mahesh's balance
    P_bal = pp - totalP; //Prasad's balance

system("pause");
system("cls");
system("color 0E");
///////////////// Calculation of Arif Account //////////////////////////////////
    cout<< "##################################################################" <<endl;
    cout<< "# \t\t\t\t\t\t\t\t # " <<endl;
    cout<< "#\t\t" << "\tArif's Account Details:"<< "\t\t\t #" <<endl;
    cout<< "# \t\t\t\t\t\t\t\t # " <<endl;
    cout<< "#" << "\tTotal Bills You Have: "<<bnoA <<"\t\t\t\t\t #" <<endl;
    cout<< "#" << "\tTotal Amount of " <<bnoA <<" Bills is: "<<totalA << "\t\t\t\t #" <<endl;
    cout<< "#" << "\tTotal Expenses for This Month is: "<< gtotal << "\t\t\t #" <<endl;
    cout<< "#" << "\tYour Share for This Month is: "<<pp <<"\t\t\t #" <<endl;
    cout<< "# \t\t\t\t\t\t\t\t # " <<endl;
    cout<< "# \t\t\t\t\t\t\t\t # " <<endl;

    if(A_bal < 0)
    {
        cout<< "#\t" << " !!!You Have Contributed More Than Total Expenses!!!" <<"\t#"<<endl;
        cout<< "# \t\t\t\t\t\t\t\t # " <<endl;
        cout<< "#\t" << "Your Extra Contribution is: +" << -(A_bal) <<"#" <<endl;
    }
    else if(A_bal == 0)
    {
        cout<< "#\t" << " !!!You Have Equal Contributed on Total Expenses!!!" << "\t #" <<endl;
        cout<< "# \t\t\t\t\t\t\t\t # " <<endl;
        cout<< "#\t" << "Your Contribution is: " << A_bal << "\t\t\t\t #" <<endl;
    }
    else
    {
        cout<< "#\t" << " !!!You Have Less Contributed on Total Expenses!!!" << "\t #" <<endl;
        cout<< "# \t\t\t\t\t\t\t\t # " <<endl;
        cout<< "#\t" << "Your Less Contribution is: -" << A_bal <<"\t\t\t\t#" <<endl;
    }
    cout<< "# \t\t\t\t\t\t\t\t # " <<endl;
    cout<< "# \t\t\t\t\t\t\t\t # " <<endl;
    cout<< "##################################################################" <<endl;


    ///////////////// Calculation of Gangesh Account //////////////////////////////////
    cout<< "##################################################################" <<endl;
    cout<< "# \t\t\t\t\t\t\t\t # " <<endl;
    cout<< "#\t\t" << "\tGangesh's Account Details:"<< "\t\t #" <<endl;
    cout<< "# \t\t\t\t\t\t\t\t # " <<endl;
    cout<< "#" << "\tTotal Bills You Have: "<<bnoG <<"\t\t\t\t\t #" <<endl;
    cout<< "#" << "\tTotal Amount of " <<bnoG <<" Bills is: "<<totalG << "\t\t\t\t #" <<endl;
    cout<< "#" << "\tTotal Expenses for This Month is: "<< gtotal << "\t\t\t #" <<endl;
    cout<< "#" << "\tYour Share for This Month is: "<<pp <<"\t\t\t #" <<endl;
    cout<< "# \t\t\t\t\t\t\t\t # " <<endl;
    cout<< "# \t\t\t\t\t\t\t\t # " <<endl;

    if(G_bal < 0)
    {
        cout<< "#\t" << " !!!You Have Contributed More Than Total Expenses!!!" <<"\t#" <<endl;
        cout<< "# \t\t\t\t\t\t\t\t # " <<endl;
        cout<< "#\t" << "Your Extra Contribution is: +" << -(G_bal) <<"\t#" <<endl;
    }
    else if(G_bal == 0)
    {
        cout<< "#\t" << " !!!You Have Equal Contributed on Total Expenses!!!" << "\t #" <<endl;
        cout<< "# \t\t\t\t\t\t\t\t # " <<endl;
        cout<< "#\t" << "Your Contribution is: " << G_bal << "\t\t\t\t #" <<endl;
    }
    else
    {
        cout<< "#\t" << " !!!You Have Less Contributed on Total Expenses!!!" << "\t #" <<endl;
        cout<< "# \t\t\t\t\t\t\t\t # " <<endl;
        cout<< "#\t" << "Your Less Contribution is: -" << G_bal <<"\t\t\t\t\t#" <<endl;
    }
    cout<< "# \t\t\t\t\t\t\t\t # " <<endl;
    cout<< "# \t\t\t\t\t\t\t\t # " <<endl;
    cout<< "##################################################################" <<endl;


///////////////// Calculation of Mahesh Account //////////////////////////////////
    cout<< "##################################################################" <<endl;
    cout<< "# \t\t\t\t\t\t\t\t # " <<endl;
    cout<< "#\t\t" << "\tMahesh's Account Details:"<< "\t\t #" <<endl;
    cout<< "# \t\t\t\t\t\t\t\t # " <<endl;
    cout<< "#" << "\tTotal Bills You Have: "<<bnoM <<"\t\t\t\t\t #" <<endl;
    cout<< "#" << "\tTotal Amount of " <<bnoM <<" Bills is: "<<totalM << "\t\t\t\t #" <<endl;
    cout<< "#" << "\tTotal Expenses for This Month is: "<< gtotal << "\t\t\t #" <<endl;
    cout<< "#" << "\tYour Share for This Month is: "<<pp <<"\t\t\t #" <<endl;
    cout<< "# \t\t\t\t\t\t\t\t # " <<endl;
    cout<< "# \t\t\t\t\t\t\t\t # " <<endl;

    if(M_bal < 0)
    {
        cout<< "#\t" << " !!!You Have Contributed More Than Total Expenses!!!" <<"\t #" <<endl;
        cout<< "# \t\t\t\t\t\t\t\t # " <<endl;
        cout<< "#\t" << "Your Extra Contribution is: +" << -(M_bal) <<"\t\t\t\t#" <<endl;
    }
    else if(M_bal == 0)
    {
        cout<< "#\t" << " !!!You Have Equal Contributed on Total Expenses!!!" << "\t #" <<endl;
        cout<< "# \t\t\t\t\t\t\t\t # " <<endl;
        cout<< "#\t" << "Your Contribution is: " << M_bal << "\t\t\t\t #" <<endl;
    }
    else
    {
        cout<< "#\t" << " !!!You Have Less Contributed on Total Expenses!!!" << "\t#" <<endl;
        cout<< "# \t\t\t\t\t\t\t\t # " <<endl;
        cout<< "#\t" << "Your Less Contribution is: -" << M_bal <<"\t#" <<endl;
    }
    cout<< "# \t\t\t\t\t\t\t\t # " <<endl;
    cout<< "# \t\t\t\t\t\t\t\t # " <<endl;
    cout<< "##################################################################" <<endl;


///////////////// Calculation of Prasad Account //////////////////////////////////
    cout<< "##################################################################" <<endl;
    cout<< "# \t\t\t\t\t\t\t\t # " <<endl;
    cout<< "#\t\t" << "\tPrasad's Account Details:"<< "\t\t #" <<endl;
    cout<< "# \t\t\t\t\t\t\t\t # " <<endl;
    cout<< "#" << "\tTotal Bills You Have: "<<bnoP <<"\t\t\t\t\t #" <<endl;
    cout<< "#" << "\tTotal Amount of " <<bnoP <<" Bills is: "<<totalP << "\t\t\t\t #" <<endl;
    cout<< "#" << "\tTotal Expenses for This Month is: "<< gtotal << "\t\t\t #" <<endl;
    cout<< "#" << "\tYour Share for This Month is: "<<pp <<"\t\t\t #" <<endl;
    cout<< "# \t\t\t\t\t\t\t\t # " <<endl;
    cout<< "# \t\t\t\t\t\t\t\t # " <<endl;

    if(P_bal < 0)
    {
        cout<< "#\t" << " !!!You Have Contributed More Than Total Expenses!!!" <<"\t #" <<endl;
        cout<< "# \t\t\t\t\t\t\t\t # " <<endl;
        cout<< "#\t" << "Your Extra Contribution is: +" << -(P_bal) <<"\t#" <<endl;
    }
    else if(P_bal == 0)
    {
        cout<< "#\t" << " !!!You Have Equal Contributed on Total Expenses!!!" << "\t #" <<endl;
        cout<< "# \t\t\t\t\t\t\t\t # " <<endl;
        cout<< "#\t" << "Your Contribution is: " << P_bal << "\t\t\t\t #" <<endl;
    }
    else
    {
        cout<< "#\t" << " !!!You Have Less Contributed on Total Expenses!!!" << "\t#" <<endl;
        cout<< "# \t\t\t\t\t\t\t\t # " <<endl;
        cout<< "#\t" << "Your Less Contribution is: -" << P_bal <<"\t\t\t\t#" <<endl;
    }
    cout<< "# \t\t\t\t\t\t\t\t # " <<endl;
    cout<< "# \t\t\t\t\t\t\t\t # " <<endl;
    cout<< "##################################################################" <<endl;


/////////////////// SUMMARY of ALL ACCOUNTS ////////////////////////////

system("color 0F");
    cout<< "***************************************************************************" <<endl;
    cout<< "*" << "\t\t\t" << "SUMMARY OF ALL ACCOUNTS" << "\t\t\t\t" << "  *" <<endl;
    cout<< "*" << "\t\t\t" << "***********************" << "\t\t\t\t" << "  *" <<endl;
    cout<< "*" << "\t\t\t" << "\t\t" << "\t\t\t\t" << "  *" <<endl;
    cout<< "*" << "\t" << "*****************************************" << "\t\t\t" << "  *" <<endl;
    cout<< "*" << "\t" << "*" << "  Grand Total of The Month: " <<gtotal << "\t" << "*" << "\t\t\t" << "  *" <<endl;
    cout<< "*" << "\t" << "*" << "  Share Amount Per Person: " <<pp << "\t" << "*" << "\t\t\t" << "  *" <<endl;
    cout<< "*" << "\t" << "*****************************************" << "\t\t\t" << "  *" <<endl;
    cout<< "*" << "\t\t\t" << "\t\t" << "\t\t\t\t" << "  *" <<endl;
    cout<< "*" << "   " << "Name" << "\t\t" << "Personal Bill" << "\t\t" << "Balance" << "\t\t\t" << "  *" <<endl;
    cout<< "*" << "   " << "----" << "\t\t" << "-------------" << "\t\t" << "-------" << "\t\t\t" << "  *" <<endl;
    cout<< "*" << "   " << "Arif" << "\t\t" << totalA << "\t\t\t" << A_bal << "\t\t\t" << "  *" <<endl;
    cout<< "*" << "   " << "Gangesh" << "\t\t" << totalG << "\t\t\t" << G_bal << "\t\t\t" << "  *" <<endl;
    cout<< "*" << "   " << "Mahesh" << "\t\t" << totalM << "\t\t\t" << M_bal << "\t\t\t" << "  *" <<endl;
    cout<< "*" << "   " << "Prasad" << "\t\t" << totalP << "\t\t\t" << P_bal << "\t\t\t" << "  *" <<endl;
    cout<< "*" << "\t\t\t" << "" << "\t\t\t\t\t\t" << "  *" <<endl;
    cout<< "***************************************************************************" <<endl;

    cout<<"Enter E or Exit: " ;
lineE:    cin>> ex;
    if(ex != 'e' && ex != 'E')
    {
        cout<< "Please Press E to Exit:";
        goto lineE;
    }else{
    exit(0);}

//system("pause");
    return 0;
}





