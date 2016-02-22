#include <vector>
#include <iostream>


using namespace std;


template<class T> class _summ;

template<> class _summ<int>
{
public:
	typedef long int acc;
};


template<class T> inline _summ<T>::acc summ(const T & mass)
{
	typedef typename _summ<T>::acc acc;

	acc sm = acc();
	for (const auto& elem : mass)
	{
		sm += elem;
	}
	return sm;
	
}



int main(int argc, char ** argv)
{
	int s;
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);



	cout << summ(v1);


	cin.get();


}