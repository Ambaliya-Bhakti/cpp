# cpp
<h1> ch 1
<h3> 1. WAP to find all even elements from given 1D array.
    
    #include<iostream>
    using namespace std;

    int main()
    {
        int n,i;

        cout << "Enter size of array : ";
        cin >> n;

        int a[n];

        for(i=0;i<n;i++)
        {
            cout << "Enter elements : ";
            cin >> a[i];
        }

        cout << "====================================" << endl;

        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                cout << "Even Number : " << a[i] << endl;
            }
        }

    }
<h3>output :-
 
 ![image](https://user-images.githubusercontent.com/122366504/212064447-b466a7cc-4e83-4943-b247-e342ede291d2.png)

    
<h3> 2. WAP to convert given string into toggle case. 
    
    #include<iostream>
    using namespace std;

    int main()
    {
        char a[200];
        int i;

        cout << "Enter string : ";
        cin >> a;

        for(i=0;a[i]!='\0';i++)
        {
            if(a[i]>='a' && a[i]<='z')
            {
                a[i] -= 32;
            }
            else if(a[i]>='A' && a[i]<='Z')
            {
                a[i] += 32;
            }
        }


        cout << "Toggle case : " << a;

    }
   <h3>output :-
    
