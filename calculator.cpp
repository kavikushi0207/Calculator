#include <iostream>
#include <math.h>

using namespace std;

void getArrayValues (int N);
void printArray(int myArray[]);
int calculateSum(int myArray[]);
int calculateMean(int myArray[]);
double calculateVariance(int myArray[]);
double calculateStandardDerivation(int myArray[]);

int N;

int main()
{
    cout<<"Enter a Value for 'N': ";
    cin>>N;
    cout<<"\n";
    //allocate  array memory dynamically to store N numbers.
    int* myArray= NULL;
    myArray=new int[N];
    //call method to get array values.
    getArrayValues(N);
    //deallocate the array.
    delete [] myArray;
    myArray = NULL;

}
//function declaration to get array values.
void getArrayValues (int N)
{
    cout<<"\n\n";
    for(int i=0;i<N;i++)
    {
        cout<<"Enter "<<i<<" index of array: ";
        cin >> myArray[i];
        cout<<endl;
    }
    cout<<"\n\n";
    //call method to print array values.
    printArray(myArray);
    //call method to print Standard Derivation.
    calculateStandardDerivation(myArray);

}
//function declaration to print array values.
void printArray(int myArray[])
{
    cout<<"The array values: ";
    for(int i=0;i<N;i++)
    {

        cout<<myArray[i]<<" ";
    }
    cout<<"\n\n";

}
//function declaration to calculate sum.
int calculateSum(int myArray[])
{
    int sum=0;
    for(int i=0;i<N;i++)
    {
        sum+=myArray[i];
    }
    cout<<"The sum of array elements : "<<sum<<"\n\n";
    return sum;
}
//function declaration to calculate mean.
int calculateMean(int myArray[])
{
    int mean= calculateSum(myArray)/N;
    cout<<"The mean of array elements : "<<mean<<"\n\n";
    return mean;

}
//function declaration to calculate variance.
double calculateVariance(int myArray[])
{
    double vSum=0;
    int meanV =calculateMean(myArray);
    for(int i=0;i<N;i++)
    {
        double variance= (meanV-myArray[i]) * (meanV-myArray[i]);
        vSum += variance / N;
    }
    cout<<"The variance of array elements : "<<vSum<<"\n\n";
    return vSum;
}
//function declaration to calculate standard derivation
double calculateStandardDerivation(int myArray[])
{
    double stdDerivation=sqrt(calculateVariance(myArray));
    cout<<"The Standard Derivation of array elements : "<<stdDerivation<<"\n\n";
}



