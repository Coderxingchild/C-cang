#include<iostream>
#include<string>
#include<list>

using namespace std;


//˫��ѭ���б�

template<class T>
struct ListNode {
	T _data;
	ListNode<T>* _next;
	ListNode<T>* _prev;

	ListNode(const T&val = T())
		:_data(val), _next(nullptr), _prev(nullptr)
	{}
};

//��װ�ڵ�
template<class T>
struct ListIterator {
	typedef ListNode<T> Node;

	Node* _node;
	ListIterator(Node* node):_node(node)
	{}

	//�õ���������֧�ֽ����ò��������� *
	T operator *()
	{
		return _node->_data;
	}
	ListIterator<T>&  operator++()
	{
		_node = _node->_next;
		return *this;
	}
	bool operator!=(const ListIterator<T>& it)
	{
		//�ж���������λ���Ƿ���ͬ
		return _node != it._node;
	}
	T* operator->()
	{
		return *_node->_data;
		//����ʱ��         //it->_data      //it.operator->()->_data
	}
};

template<class T>
class List {
public:
	typedef ListNode<T> Node;

	List()
	{
		//�յĴ�ͷ����˫��ѭ������
		_header = new Node;
		_header->_next = _header->_prev =_header;
	}
	void pushBack(const T& val)
	{
		Node* cur = new Node(val);
		Node* tail = _header->_prev;

		tail->_next = cur;
		cur->_prev = tail;
		cur->_next = _header;
		_header->_prev = cur;
	}
	void print()
	{
		Node* cur = _header->_next;
		while (cur != _hear) {
			cout << cur->_data << " ";
			cur = cur->_next;
		}
		cout << endl;
	}
private:
	Node* _header;
};




//void test()
//{
//	list<int> ls;
//	// list<int> ls1(3, 10);
//	//list<int> cpoy(ls1);
//
//	list<int> ls1;
//	ls1.push_back(1);
//	ls1.push_back(2);
//	ls1.push_back(3);
//	ls1.push_back(3);
//	ls1.push_back(4);
//	ls1.push_back(5);
//
//	//������
//	list<int>::iterator it = ls1.begin();
//	while (it != ls1.end())
//	{ 
//		cout << *it << " ";
//		*it = *it + 1;
//		++it;
//	}
//	cout << endl;
//	
//	list<int> ::const_iterator cit = ls1.cbegin();
//	while (cit != ls1.cend())
//	{
//		cout << *cit << " ";
//		++cit;
//	}
//	cout << endl;
//
//
//	//���������
//	list<int>::reverse_iterator rit = ls1.rbegin();
//	while (rit != ls1.rend())
//	{
//		cout << *rit << " ";
//		++rit;
//	}
//	cout << endl;
//}


//void test()
//{
//	list<int> ls1;
//	ls1.assign(3, 6);        //��ֵ����
//	printfor(ls1);
//	int arr[] = { 0,2,565,8,65,432,5 };
//	ls1.assign(arr, arr + 5);
//	printiterator(ls1);
//}


//void test()
//{
//	//����Ԫ��
//	list<int> ls;
//	ls.insert(ls.begin(), 0);
//	ls.insert(ls.end(), 4);
//	ls.insert(--ls.end(), 7);
//	ls.insert(++ls.begin(),9);
//
//	ls.insert(ls.begin(), 5, 5);   //555550974
//	printfor(ls);
//
//	//ɾ��
//	ls.erase(ls.begin());
//	ls.erase(--ls.end());   //5555097
//	printfor(ls);
//}



//�޸Ĵ�С

//void test()
//{
//	list<int> lst;
//	cout << lst.size()<< endl; 
//	lst.resize(2);             // 0 0
//	printfor(lst);     
//	lst.resize(5, 5);             //0 0 5 5 5
//	printiterator(lst);
//
//	list<string> ls1;
//	ls1.resize(2);
//	printiterator(ls1);                  //"" ""
//	ls1.resize(5, "12");           //   "" "" "12" "12" "12"
//	printiterator(ls1);
//}

//void test()
//{
//	list<int> ls;
//	ls.push_back(1);
//	ls.push_back(2);
//	ls.push_back(3);
//	ls.push_back(4);
//	ls.push_back(5);
//	printfor(ls);
//	
//	ls.clear();     //���
//	printfor(ls);
//}



//splice  ƴ��

//void test()
//{
//	list<int> ls;
//	ls.push_back(1);
//	ls.push_back(2);
//	ls.push_back(3);
//	list<int> ls2;
//	ls2.push_back(4);
//	ls2.push_back(5);
//	printfor(ls);
//	printfor(ls2);
//	ls.splice(ls.begin(), ls2);  //ƴ�ӣ�֮�� ls2 Ϊ��
//	printfor(ls);
//	printfor(ls2);
//}


//remove ɾ��
//void test()
//{
//	list<int> ls;
//	ls.push_back(1);
//	ls.push_back(2);
//	ls.push_back(3);
//	ls.push_back(4);
//	ls.push_back(5);
//	printfor(ls);
//
//	ls.remove(3);
//	printfor(ls);
//
//	ls.remove(6);
//	printfor(ls);
//}



//unique ȥ��
//Ԫ��Ҫ����

//void test()
//{
//	list<int> ls;
//	ls.push_back(4);
//	ls.push_back(1);
//	ls.emplace_back(7);
//	ls.emplace_front(5);
//	ls.emplace_back(7);
//	ls.emplace_back(7);
//	printfor(ls);        // 541777
//
//	ls.sort();           //145777
//	printfor(ls);
//
//	ls.unique();             //1457
//	printfor(ls);
//}


//void test()
//{
//	//merge �ϲ�-----------------��������ƴ��
//
//	list<int> ls;
//	list<int> ls1;
//
//	ls.push_back(4);
//	ls.push_back(5);
//	ls.push_back(6);
//
//	ls1.push_back(1);
//	ls1.push_back(2);
//	ls1.push_back(3);
//	printfor(ls);
//	printfor(ls1);
//	
//	ls.merge(ls1);         //����ƴ�ӣ�ƴ��֮�� ls1 Ϊ��
//	printfor(ls);
//	printfor(ls1);
//}


//template <class T>
//void printiterator(const list<T>& ls)
//{
//	typename list<T>::const_iterator cit = ls.cbegin();
//	while (cit != ls.cend()) {
//		cout << *cit << " ";
//		++cit;
//	}
//	cout << endl;
//}
//
//template<class T>
//void printfor(const list<T> & ls)
//{
//	for (const auto& e : ls) {
//		cout << e << " ";
//	}
//	cout << endl;
//}
//
//
//int main()
//{
//	test();
//	return 0;
//}