#include <iostream>
using namespace std;

/* To find total salary in 'n' years with 'x' increament in every year */  

int total(int salary, int increament, int no_of_years){
    cout<<"Total salary in "<<no_of_years<<" years with "<<increament<<" increament in every year = "; 
    cout<<12*(no_of_years/2)*(2*salary+(no_of_years-1)*increament)<<endl;
}



int main(){

    /* To find sum from 'a' integer to 'b' integer which are multiples of 'x' */
    cout<<"Enter a : ";
    int a1;cin>>a1;
    cout<<"Enter b : ";
    int b1;cin>>b1;
    cout<<"Enter x : ";
    int x1;cin>>x1;    
    int sum1=0;
    for (int i = a1  ; i <= b1 ; i++)
    {
        if (i%x1 == 0)
        {
            sum1+=i;
        }
        
    }
    cout<<"Sum of multiples of "<<x1<<" from "<<a1<<" to "<<b1<<" = "<<sum1<<endl;



    
    /* To find sum between integer 'a' and integer 'b' which are multiples of 'x' */
    cout<<"Enter a : ";
    int a2;cin>>a2;
    cout<<"Enter b : ";
    int b2;cin>>b2;
    cout<<"Enter x : ";
    int x2;cin>>x2;    
    int sum2=0;
    for (int i = (a2-(a2%x2))+x2  ; i < b2 ; i++)
    {
        if (i%x2 == 0)
        {
            sum2+=i;
        }
        
    }
    cout<<"Sum of multiples of "<<x2<<" between "<<a2<<" and "<<b2<<" = "<<sum2<<endl;
    
    

    // find 'n' terms of the sequence of 1,4,9,....n and the sum of the 'n' terms
    int input,power=1;
    cout<<"Enter a no. n \n";
    cin>>input;
    cout<<"sequence: ";
    for (int i = 1; i <= input; i++)
    {
        int sum=0;
        sum=i*i;
        cout<<sum<<",";
        power+=i*i;
    }
    cout<<endl<<"Sum of series: "<<power<<endl;







    // To find first 'n' terms of sequence " n(n-2)/n+3 and the sum of the 'n' terms .But it gives only integer values"
    int i1=1;
    cout<<"Enter no. of terms: ";
    int n1;cin>>n1;
    cout<<"Sequence: ";
    while (i1<=n1)
    {
                
        float ans=(i1*(i1-2)/(i1+3));
        cout<<ans<<",";
        i1++;
    }
    cout<<endl;

    int i2=1,ans1=0;
    while (i2<=n1)
    {
                
        ans1+=(i2*(i2-2)/(i2+3));
        i2++;
    }
    cout<<"Sum of the series: "<<ans1<<endl;



    
    // To find first 'n' terms of the sequence " n(n+2)" and sum of the 'n' terms
    int n,i=1;
    cout<<"Enter no. of terms \n";
    cin>>n;
    cout<<"Sequence: ";
    while (i<=n)
    {
        int ans1=0;
        ans1=i*(i+2);
        cout<<ans1<<",";
        i++;
    }
    cout<<endl;
    int ans2=0;
    for (int i = 1; i <= n; n--)
    {
        ans2+=(n*(n+2));

    }
    cout<<"Sum of the series; "<<ans2<<endl;



    // To create an A.P.
    int num1,input2,num2;
    cout<<"Enter first term: ";
    cin>>num1;
    cout<<"Enter common difference: ";
    cin>>num2;
    cout<<"Enter no. of terms: ";
    cin>>input2;
    cout<<"The A.P. = ";
    for (int i = 1; i <= input; i++)
    {
        cout<<num1<<",";
        num1+=num2;
    }
    cout<<"..... \n";



    // To find Nth term of an A.P.
    int num3,num4,num5;
    cout<<"Enter the number of the term \n ";
    cin>>num3;
    cout<<"Enter the first term \n ";
    cin>>num4;
    cout<<"Enter the common difference \n ";
    cin>>num5;
    cout<<"the Nth term = "<<(num4+(num3-1)*num5)<<endl;



    /* to find arithmetic mean */
    cout<<"Enter a: ";
    int a;cin>>a;
    cout<<"Enter b: ";
    int b;cin>>b;
    cout<<"Enter no. of terms: ";
    int n2;cin>>n2;

    int d = (b-a)/(n2+1);
    for (int i = 1; i <= n2; i++)
    {
        cout<<(a+i*d)<<",";

    }
    cout<<endl;



    // to call the function
    total(700,40,10);
    total(50000, 1000, 50);


}