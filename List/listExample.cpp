#include<iostream>
#include<list>
#include<algorithm>
#include<functional>
using namespace std;
void print_List(list<int> lst);
int main(){
    list<int> lst1;
    
    list<int> lst2(3,7);
    print_List(lst2);

    for (int j = 1; j <= 5; j++){
        lst1.push_back(j);
    }
    print_List(lst1);

    list<int>::iterator i1 = lst1.begin(), i2 = i1, i3;
    i2++;
    i2++;
    i2++;
    list<int> lst3(++i1, i2);
    print_List(lst3);

    list<int> lst4(lst1);
    print_List(lst4);

    i1 = lst4.begin();
    lst4.splice(++i1,lst2);
    print_List(lst4);
    
    lst2 = lst1;
    i2 = lst2.begin();

    lst4.splice(i1,lst2,++i2);
    print_List(lst4);

    i2 = lst2.begin();
    i3 = i2;
    lst4.splice(i1, lst2, i2, ++i3);
    print_List(lst4);

    lst4.remove(1);
    lst4.sort();
    lst4.unique();
    lst1.merge(lst2);

    lst3.reverse();
    lst4.reverse();
    lst3.merge(lst4,greater<int>());

    lst3.remove_if(bind2nd(not_equal_to<int>(),3));
    lst3.unique(not_equal_to<int>());
    return 0;
}
void print_List(list<int> lst){
    for(list<int>::iterator it=lst.begin();it!=lst.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

