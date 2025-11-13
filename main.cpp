#include <iostream>
#include<vector>
#include<string>
#include<cctype>
using namespace std;

int evencount(const int* a, int size) {
    int sum = 0;
    const int *ptr=a;

    for (int i = 0; i < size; i++) {
        if (*(a+i) % 2 == 0) {
            sum++;
        }
    }
    return sum;
}

bool is_mirrored(const int* a, const int* b, int size) {
    const int *ptr1=a, *ptr2=b+ size-1;
    for (int i = 0; i < size; i++) {
            if (*(ptr1+i) == *(ptr2-i)) {
                return 1;
        }
    }
    return 0;
}

void sumarrays(const double* arr1, const double* arr2, double sum, int size) {
    const double *ptr11=arr1; const double *ptr12=arr2;
    for (int i = 0; i < size; i++) {
        sum=*(ptr11+i)+*(ptr12+i);
        cout << sum << endl;
    }
}

void swap(int* arr1, int* arr2, int size) {
    int temp;
    for (int i = 0; i < size; i++) {
        temp = *(arr1+i);
        *(arr1+i) = *(arr2+i);
        *(arr2+i) = temp;

    }
}

bool is_in(const int*arr1,const int*arr2, int size1,int size2){
    const int *p1=arr1;
    const int *p2=arr2;
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (*(p1+i) == *(p2+j)) {
                return arr1[i];
            }
        }
    }
}

void power(double* n, const int* p) {
    double result= 1.0;
    for ( int i=0; i<*p; i++) {
        result *= *n;
    }
    cout << " output: "<< result << endl;
}

vector<int > addOne(vector<int>&v) {
    int carry = 1 ;
    for (int i=0; i<v.size(); i++) {
        int sum = v[i] + carry;
        v[i]=sum%10;
        carry = sum/10;
    }
    if (carry>0)
        v.push_back(carry);
    return v;
}

string normolize(string s) {
    if (s.empty()) return s;
    s[0]=toupper(s[0]);
    for (int i=1; i<s.size(); i++)
        s[i]=tolower(s[i]);
 return s;
}

int singleNum(vector<int>& vec) {
    int result = 0;
    for (int n : vec)
        result^=n;
    return result;
}

int main(){
    // problem 1

    const int Size =10;
    float *ptr, arr[Size];
    ptr= arr;
    cout << "enter the midterm grades of "<< Size<<" students"<< endl;
    for (int i=0;i<Size;i++) {
        cout<< "student "<<i+1<<":";
    cin>> *(ptr+i);
        *(ptr+i)=*(ptr+i)*0.3;
    }
    cout<< " midterm result is : ";
    for (int i=Size-1;i>=0;i--) {
        cout<<*(ptr+i)<<" ";
    }

// problem 2

    int size; cout<< "\nenter size: "; cin>>size;
    int  array[size];
    for (int i=0;i<size;i++) {
        cin>>array[i];
    }
    cout<< evencount(array,size);

    // problem 3

    int size1; cout<< "enter size: "; cin>>size1;
    int array1[size1], array2[size1];
    cout<< "enter elements for 1st array : ";
    for (int i=0;i<size1;i++) {
        cin>>array1[i];
    }
    cout<< "enter elements for 2nd array : ";
    for (int i=0;i<size1;i++) {
        cin>>array2[i];
    }
    cout<< is_mirrored(array1,array2,size1);

    // problem 4

    int size2; cout << "Enter size: "; cin >> size2;
    cout << " enter values 1:  ";
    double arr1[size2]; double arr2[size2]; double sum= 0;
    for (int i = 0; i < size2; i++) {
        cin >> arr1[i];
    }
    cout<< "enter values: " ;
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }
    sumarrays(arr1,arr2,sum,size2);

    // problem 5

    int size5;
    cout << "Enter size of array: ";
    cin >> size5;

    int arr11[size5];
    cout << "Enter array elements: ";
    for (int i = 0; i < size5; i++) {
        cin >> arr11[i];
    }

    int arr12[size5];
    cout << "Enter array elements: ";
    for (int i = 0; i < size5; i++) {
        cin >> arr12[i];
    }
    swap(arr11, arr12, size5);
    for (int i = 0; i < size5; i++) cout << arr11[i]<< " ";
    cout << endl;
    for (int i = 0; i < size5; i++) cout << arr12[i] << " ";
    cout << endl;

    // problem 6

    int size61, size62;
    cout << "enter 1st size: "; cin >> size61; cout << endl;
    cout << "enter 2nd size: "; cin >> size62; cout << endl;
    int arr6[size61], arr62[size62];
    cout << "enter array elements 1: ";
    for (int i = 0; i < size61; i++) {
        cin >> arr6[i];
    }
    cout<< endl;
    cout << "enter array elements 2: ";
    for (int i = 0; i < size62; i++) {
        cin >> arr62[i];
    }
    cout << endl;

    cout << is_in(arr6, arr62, size61, size62);

// problem 7

    double num7; int pow;
    cout<< "enter the number: "; cin >> num7;
    cout << endl;
    cout << "enter power number: "; cin >> pow;
    cout << endl;
    cout << " result is: ";
    power(&num7, &pow);

    // problem 8

    vector<int>v; string input; cout<< "input : "; cin >> input; cout << endl;
    for (int i = 0 ; i < input.size(); i++)
        v.push_back(input[input.size()-1-i]);
    vector<int > result = addOne(v);
    cout<< "output: ";
    for (int i= result.size()-1; i>=0; i--)
        cout << result[i];
    cout << endl;

    // problem 9

    string inputt;
    cout << "input: ";
    cin >> inputt;
    cout << endl;
    cout << "output: "<< normolize(inputt) << endl;

    // problem 10

    vector<int> vec;
    int t;
    cout << "enter the numbers";
    while (cin >> t) {
        vec.push_back(t);
    }
    cout << "single number: "<< singleNum(vec) << endl;

return 0;
}