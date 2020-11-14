#include<iostream>
#include<vector>
#include<assert.h>

using namespace std;


//ģ��ʵ�� vector

//template <class T>
//class Vector {
//public:
//	Vector() :_start(nullptr), _finish(nullptr), _endOfStorage(nullptr)
//	{}
//	~Vector()
//	{
//		if (_start) {
//			delete[] _start;
//			_finish = _endOfStorage = _start = nullptr;
//		}
//	}
//	size_t size() const   //��Ч�ַ�����
//	{
//		return _finish - _start;
//	}
//	size_t capacity() const  //����
//	{
//		return _endOfStorage - _start;
//	}
//
//	//β��
//	void push_back(const T& val) {
//		//�жϿռ��Ƿ��㹻
//		if (_finish == _endOfStorage) { 
//			size_t newCapacity = _start == nullptr ? 1 : 2 * capacity();
//			reserve(newCapacity);
//		}
//		*_finish = val;
//		++_finish;
//	}
//	//βɾ
//	void pop_back()
//	{
//		--_finish;
//	}
//	void reserve(size_t n)   //����
//	{
//		if (n > capacity()) {
//			size_t sz = size();
//			T* tmp = new T[n]; //���� n ���ռ�
//			// ����ԭ������
//			//memcpy(tmp, _start, _start + size());        //ǳ����
//			for (int i = 0; i < sz; ++i)
//			{
//				tmp[i] = _start[i];      //���
//			}
//
//			//ɾ��ԭ�пռ�
//			delete[] _start;
//
//			//����ָ��ָ��
//			_start = tmp;
//			_finish = _start + sz;
//			_endOfStorage = _start + n;
//		}
//	}
//	T& operator[](size_t pos)
//	{
//		assert(pos < _finish);
//		return _start[pos];
//	}
//	const T& operator[](size_t pos) const
//	{
//		assert(pos < _finish);
//		return _start[pos];
//	}
//
//	typedef T* iterator;
//	typedef const T* const_iterator;
//
//	//��������ʹ��
//	iterator begin()
//	{
//		return _start;
//	}
//	iterator end()
//	{
//		return _finish;
//	}
//	const_iterator begin() const
//	{
//		return _start;
//	}
//	const_iterator end() const
//	{
//		return _finish;
//	}
//	//�޸���Ч�ռ��С
//	void resize(size_t n, const T& val = T())
//	{
//		if (n > capacity()) {
//			reserve(n);
//		}
//		if (n > size()) {
//			iterator it = end();
//			while (it != _start + n) {
//				*it = val;
//				++it;
//			}
//		}
//		_finish = _start + n;
//	}
//	//������λ�ò���
//	void insert(T& pos, const T& val)
//	{
//		//�ж�λ�õĺϷ���
//		assert(pos >= _start && pos <= _finish);
//		int offset = pos - _start;         //ƫ����
//		//����
//		if (_finish == _endOfStorage) {
//			size_t newCapacity = _start == nullptr ? 1 : 2 * capacity();
//			reserve(newCapacity);
//		}
//		pos = _start + offset;   //���ݻ�ʹ������ʧЧ
//		iterator it = end();
//		while (it != pos)
//		{
//			*it = *(it - 1);
//			--it;
//		}
//		*pos = val;
//		++_finish;
//	}
//	//����λ��ɾ
//	iterator erase(T& pos)
//	{
//		assert(pos >= begin() && pos <= end());
//		iterator it = pos + 1;
//		while (it != end())
//		{
//			*(it - 1) = *it;
//			++it;
//		}
//		--_finish;
//		return pos;
//	}
//private:
//	T* _start;
//	T* _finish;
//	T* _endOfStorage;
//};
//
////��Χ for
//template<class T>
//void print_for(const Vector<T>& v)
//{
//	for (const auto& ch : v) {
//		cout << ch << " ";
//	}
//	cout << endl;
//}
//template <class T>
//void printiterator(const Vector<T>& v)
//{
//	typename Vector<T>::const_iterator cit = v.begin();
//	while (cit != v.end())
//	{
//		cout << *cit << " ";
//		++cit;
//	}
//	cout << endl;
//}
//
//void test()
//{
//	Vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//	v.push_back(5);
//	v.push_back(6);
//	printiterator(v);
//
//	v.pop_back();
//	print_for(v);
//
//	v.insert(v[2], 8);
//	print_for(v);
//
//	v.erase(v[1]);
//	print_for(v);
//}
//int main()
//{
//	test();
//	return 0;
//}



//template<class T>
//class Vector {
//public:
//	Vector() :_start(nullptr), _finish(nullptr), _end(nullptr)   //����
//	{}
//	~Vector()                 //����
//	{
//		if (_start) {
//			delete[] _start;
//			_start = _finish = _end = nullptr;
//		}
//	}
//	T& operator[](size_t pos)
//	{
//		assert(pos >= _start && pos < _finish);
//		return _start[pos];
//	}
//	const T& operator[](size_t pos) const
//	{
//		assert(pos >= _start && pos < _finish);
//		return _start[pos];
//	}
//	size_t size()   const      //��С
//	{
//		return _finish - _start;
//	}
//	size_t capacity()  const   //����
//	{
//		return _end - _start;
//	}
//	void push_back(const T& val)   //β��
//	{
//		if (_finish == _end) {
//			size_t newCapacity = _start == nullpter ? 1 : 2 * capacity();
//			reverse(newCapacity);
//		}
//		*_finish = val;
//		++_finish;
//	}
//	void reverse(size_t n)          //����
//	{
//		if (n > capacity()) {
//		//��Ҫ�޸�����
//			size_t sz = size();
//			T* tmp = new T[n];  //�ȿ���n ���ռ�
//			for (int i = 0; i < sz; ++i)
//			{
//				tmp[i] = _start[i];
//			}
//			delete[] _start;
//			_start = tmp;
//			_finish = _start + sz;
//			_end = _start + n;
//		}
//	}
//	//�޸� size
//	void resize(size_t n, const Vector<T>& v, const T& val = T())
//	{
//		if (n > capacity())
//		{
//			reverse(n);
//		}
//		if (n > size())
//		{
//			for (size_t i = _start + size(); i < _start + n; ++i)
//			{
//				v[i] = val;
//			}
//		}
//		_finish = _start + n;
//	}
//	void insert(const Vector<T>& v,T& pos, const T& val)   //����
//	{
//		assert(pos >= _start && pos <= _finish);
//		int offset = pos - _start;
//
//		if (_finish == _end) {
//			size_t newCapacity = _start == nullptr ? 1 : 2 * capacity();
//			reverse(newCapacity);
//		}
//		for (int i = _finish; i > pos; --i) {
//			v[i] = v[i - 1];
//		}
//		v[pos] = val;
//		++_finish;
//	}
//private:
//	T* _start;
//	T* _finish;
//	T* _end;
//};
//void test()
//{
//	Vector<int> v;
//	v.size();
//	v.capacity();
//	for (int i = 0; i < v.size(); ++i) {
//		cout << v[i] << endl;
//		//cout << v.operator[](i) << endl;
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}







//void test()
//{
//	vector<int> v1(10, 1);
//	int a[] = { 1,2,3,4,5,6,7,8,9,0 };
//	vector<int> v(a, a + sizeof(a) / sizeof(int));
//	vector<char> v2(10, 'a');
//
//	vector<char>::const_iterator cit = v2.cbegin();
//	while (cit != v2.cend()) {
//		cout << *cit << " ";
//		++cit;
//		// *cit = 'c';
//	 }
//	cout << endl;
//
//	vector<int>::iterator it = v.begin();
//	while (it != v.end()) {
//		cout << *it << " ";
//		*it = 1000;         //�ɶ���д
//		++it;
//	}
//	cout << endl;
//	
//	vector<int>::reverse_iterator rit = v1.rbegin();
//	while (rit != v1.rend()) {
//		cout << *rit << " ";
//		*rit++;
//		*rit = 100;                 //�ɶ���д
//	}
//	cout << endl;
//	
//	vector<char>::const_reverse_iterator crit = v2.crbegin();
//	while (crit != v2.crend()) {
//		cout << *crit << " ";
//		++crit;
//		// *crit = 'b';         //ֻ��
//	}
//	cout << endl;
//
//
//
//
//	//vector<int> v1(10, 1);
//	//vector<int> v2 = v1;         //��������
//	//v2 = v1;                 //��ֵ�������v2 ���Ѿ����ڵĶ���
//
//
//	/*vector<int> v1;
//	vector<char> v2(10, 'a');
//	vector<double> v3;
//
//	cout << v1.size() << endl;
//	cout << v1.capacity() << endl;
//	cout << v2.size() << endl;
//	cout << v2.capacity() << endl;
//	cout << v3.size() << endl;
//	cout << v3.capacity() << endl;*/
//}
//int main()
//{
//	test();
//	return 0;
//}