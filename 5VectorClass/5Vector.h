template<typename T>
class vector{
	int cs;
	int ms;
	T *arr;
    
    public:
	vector()
	{
		cs=0;
		ms=1;
		arr=new T[ms];
	}
	void push_back(int d)
	{
		if(cs==ms)
		{
			T *oldarr=arr;
			ms=ms*2;
			arr=new T[ms];
			for(int i=0;i<cs;i++)
			{
				arr[i]=oldarr[i];
			}
			delete []oldarr;
		}
		arr[cs]=d;
		cs++;
	}
	void pop_back()
	{
		cs--;
	}
	T front(){
		return arr[0];
	}
	T back(){
		return arr[cs-1];
	}

	bool empty()
	{
		return cs==0;
	}

	int size()
	{
		return cs;
	}
	int capacity()
	{
		return ms;
	}
	T operator[](int i)
	{
		return arr[i];
	}
};