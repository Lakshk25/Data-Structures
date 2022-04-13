#include<iostream>
using namespace std;
class twoStack{
    int *arr;
    int top1;
    int top2;
    int size;
    public:
        twoStack(int s){
            this->size = s;
            this->top1 = -1;
            this->top2 = s;
            this->arr = new int[s];
        }
    void push1(int num){
        if(top2 - top1 > 1){
            top1++;
            arr[top1] = num;
        }
    }
    void push2(int num){
        if(top2 - top1 > 1){
            top2--;
            arr[top2] = num;
        }
    }
    int pop1(){
        if(top1>=0){
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else
            return -1;
    }
    int pop2(){
        if(top1<size){
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else
            return -1;
    }
    int getArray(int a){
        return arr[a];
    }
};
int main(){
    twoStack s(10);
    s.push1(5);
    s.push1(3);
    s.push1(2);
    s.push2(1);
    s.push2(9);
    s.push2(8);
    cout<<s.getArray(1)<<endl;
}
