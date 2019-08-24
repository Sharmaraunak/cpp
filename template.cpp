#include<iostream>

using namespace std;

template <typename T>
T add(T a,T b){
    return a+b;
}

template <class p>
class Something{

    public:
        p a[2];
        p add();
        p x;
        Something();
};

template <class p>
Something<p>::Something(){
    cin>>a[0]>>a[1];
}

template <class p>
 p Something<p>::add(){
    return a[0]+a[1];
}

int main(){

    int x,y;
    cout << "enter first number : "<<endl;
    cin >> x;
    cout << "enter second number: "<<endl;
    cin >> y;
    cout << " The result is: "<< add<int>(x,y)<<endl;

    //about class template
    Something<float> floatSomething;
    cout<<floatSomething.add();


    return 0;
}