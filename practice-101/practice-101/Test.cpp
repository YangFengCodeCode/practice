#include<iostream>
#include<list>
using namespace std;


#include<algorithm>





void Test8()
{
    list<int> lt = { 1, 2 };
    lt.push_back(100);
    for (auto e : lt)
    {
        cout << e << " ";
    }
    cout << endl;

    lt.pop_back();
    for (auto e : lt)
    {
        cout << e << " ";
    }
    cout << endl;
}



void Test7()
{
    list<int> lt = { 1, 2 };
    lt.push_front(100);
    for (auto e : lt)
    {
        cout << e << " ";
    }
    cout << endl;

    lt.pop_front();
    for (auto e : lt)
    {
        cout << e << " ";
    }
    cout << endl;
}




void Test6()
{
    std::list<int> first;
    std::list<int> second;

    first.assign(7, 100);                      

    second.assign(first.begin(), first.end()); 

    int myints[] = {1776,7,4 };
    first.assign(myints, myints + 3);            

    cout << "first: ";
    for (auto e : first)
    {
        cout << e << " ";
    }
    cout << endl;

    cout << "second: ";
    for (auto e : second)
    {
        cout << e << " ";
    }
    cout << endl;
}














void Test5()
{
    list<int> lt1;
    if (lt1.empty()) cout << "empty" << endl;
    else cout << "full" << endl;

    list<int> lt2{ 1, 2, 3, 4 };
    cout << "lt1: " << lt1.size() << "  lt2: " << lt2.size() << endl;
}

//void Test4()
//{
//    list<int> lt(5);
//    list<int>::reverse_iterator it = lt.rbegin();
//    int i = 1;
//    while (it != lt.rend())
//    {
//        *it += i;
//        ++it;
//        ++i;
//    }
//    for (auto e : lt)
//    {
//        cout << e << ' ';
//    }
//
//}

//void Test3()
//{
//    list<int> lt(4, 1);
//    list<int>::iterator it = lt.begin();
//    while (it != lt.end())
//    {
//        cout << *it << ' ';
//        ++it;
//    }
//    cout << endl;
//
//    const list<int> llt(4, 10);
//    list<int>::const_iterator itt = llt.begin();
//    while (itt != llt.end())
//    {
//        cout << *itt << ' ';
//        ++itt;
//    }
//
//}



void Test9()
{
   
    list<int> lt(4, 10);
    lt.insert(lt.begin(), 100);
    for (auto e : lt)
    {
        cout << e << ' ';
    }
    cout << endl;

    lt.insert(lt.end(), 4, 100);
    for (auto e : lt)
    {
        cout << e << ' ';
    }

    cout << endl;
    
}

void Test10()
{
    list<int> lt{ 1, 2, 3, 4, 5, 6};
    lt.erase(lt.begin());
    for (auto e : lt)
    {
        cout << e << ' ';
    }

    cout << endl;

    lt.erase(++lt.begin(), lt.end());
    for (auto e : lt)
    {
        cout << e << ' ';
    }
}


void Test11()
{
    
    list<int> l1(4, 10);
    list<int> l2(4, 1);
    l1.swap(l2);

    cout << "l1: ";
    for (auto e : l1)
    {
        cout << e << ' ';
    }
    cout << endl;

    cout << "l2: ";
    for (auto e : l2)
    {
        cout << e << ' ';
    }  
}

void Test12()
{
    list<int> mylist;
    for (int i = 1; i < 10; ++i) mylist.push_back(i);

    mylist.resize(5);
    cout << "mylist contains:";
    for (std::list<int>::iterator it = mylist.begin(); it != mylist.end(); ++it)
        std::cout << ' ' << *it;
    cout << endl;

    mylist.resize(8, 100);
    cout << "mylist contains:";
    for (std::list<int>::iterator it = mylist.begin(); it != mylist.end(); ++it)
        std::cout << ' ' << *it;
    cout << endl;

    mylist.resize(12);
    cout << "mylist contains:";
    for (std::list<int>::iterator it = mylist.begin(); it != mylist.end(); ++it)
        std::cout << ' ' << *it;
    cout << endl;

}


void Test13()
{
    list<int> lt{ 1, 2, 3, 4 };

    cout << lt.front() << endl;
    cout << lt.back() << endl;
}



void Test14()
{
    list<int> mylist1 = { 1, 2, 3, 4 }, mylist2 = { 10, 20, 30 };
    list<int>::iterator it = mylist1.begin();
    ++it;         // points to 2

    mylist1.splice(it, mylist2); // mylist1: 1 10 20 30 2 3 4

    cout << "mylist1:  ";
    for (auto e : mylist1)
    {
        cout << e << " ";
    }
    cout << endl;

    cout << "mylist2:  ";
    for (auto e : mylist2)
    {
        cout << e << " ";
    }
    cout << endl;

    mylist2.splice(mylist2.begin(), mylist1, mylist1.begin());
    cout << "mylist1:  ";
    for (auto e : mylist1)
    {
        cout << e << " ";
    }
    cout << endl;

    cout << "mylist2:  ";
    for (auto e : mylist2)
    {
        cout << e << " ";
    }
    cout << endl;


    mylist1.splice(mylist1.begin(), mylist2, mylist2.begin(), mylist2.end());
    cout << "mylist1:  ";
    for (auto e : mylist1)
    {
        cout << e << " ";
    }
    cout << endl;

    cout << "mylist2:  ";
    for (auto e : mylist2)
    {
        cout << e << " ";
    }
    cout << endl;
}



void Test15()
{
    list<int> lt{ 2, 1, 2, 4, 10, 11, 99, 88 };
    lt.sort();
    for (auto e : lt)
    {
        cout << e << " ";
    }

}

void Test16()
{
    
    list<int> lt;
    lt.push_back(1);
    lt.push_back(2);
    lt.push_back(3);
    lt.push_back(4);
    lt.push_back(5);
    for (auto e : lt)
    {
        cout << e << " ";
    }
    cout << endl;
    lt.reverse();

    for (auto e : lt)
    {
        cout << e << " ";
    }
    cout << endl;
  

}

int main()
{
    //Test3();
    Test16();
    return 0;
}
















//void Print(list<int>& lt)
//{
//    list<int>::iterator it = lt.begin();
//    while (it != lt.end())
//    {
//        cout << *it << " ";
//        it++;
//    }
//    cout << endl;
//}


//int main()
//{
//	list<int> lt1{ 1, 2, 3, 4, 5 };
//	Print(lt1);
//	return 0;
//}

//int main()
//{
//	list<int> a;
//
//	list<int> b(4, 100);
//	list<int> c(4);
//	list<int> d(b.begin(), b.end());
//	list<int> e(b);
//
//	cout << "b: ";
//	Print(b);
//
//	cout << "c: ";
//	Print(c);
//
//	cout << "d: ";
//	Print(d);
//
//	cout << "e: ";
//	Print(e);
//
//	return 0;
//}