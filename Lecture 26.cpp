QUESTION --1




#include <iostream>
#include <bits/stdc++.h>


using namespace std;

int main()
{
    int a = 10;
    int b =0;
    try {
        if(b == 0) throw 0;
        cout<<endl;
        cout<<a/b<<endl;
    }
    catch(int e) {
        cout<<e<<"throw from the try block.!"<<endl;
    }
    cout<<"program ended normally"<<endl;

    return 0;
}





QUESTION --2






#include <iostream>
#include <bits/stdc++.h>


using namespace std;

int main()
{
    int a = 10;
    int b =0;
    try {
        if(b == 0) throw 'a';
        cout<<endl;
        cout<<a/b<<endl;
    }
    catch(...) {
        cout<<"throw from the try block.!"<<endl;
    }

    // catch( char err) {
    // cout<<err<<"throw from the try block.!"<<endl;

    //}
    cout<<"program ended normally"<<endl;

    return 0;
}






QUESTION --3





#include <iostream>
#include <bits/stdc++.h>


using namespace std;

int main()
{
    int a = 10;
    int b =0;
    try {
        if(b == 0) throw 'a';
        cout<<endl;
        cout<<a/b<<endl;
    }
    catch(...) {
        cout<<"throw from the try block.!"<<endl;
        throw;
    }

    // catch( char err) {
    // cout<<err<<"throw from the try block.!"<<endl;

    //}
    cout<<"program ended normally"<<endl;

    return 0;
}







QUESTION --4




#include <iostream>
#include <bits/stdc++.h>


using namespace std;

int main()
{
    int a = 10;
    int b =0;
    try {
        try {
            if(b == 0) throw 'a';
            cout<<endl;
            cout<<a/b<<endl;

        }
        catch(...) {
            cout<<"throw from the try block.!"<<endl;
            throw;

        }
    }catch(...) {
        cout<<"Catched"<<endl;
    }



    cout<<"program ended normally"<<endl;

    return 0;
}
