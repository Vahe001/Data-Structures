using namespace stdVahe;

vector::vector()
{
    max_size = 1;
	size = 0;
	arr = new int[max_size];
}
int vector::size()
{
    return size;
}
int vector::capacity()
{
    return max_size;
}
void vector::push_back(int val)
{
    if (size == max_size)
	{
        int *brr = arr;
		max_size *= 2;
		arr = new int [max_size];
		for (int i = 0; i < size; ++i)
		{
            arr[i] = brr[i];
        }
        delete[] brr;
		a[++size] = val;
        return;
	}
	a[++size] = val;
}
void vector::pop_back()
{
     arr[size--] = null;
}

void clear()
{
    for(int i = 0; i < size; ++i)
    {
        arr[i] = null;
    }
    size = 0;
}
void insert(int  t, int x)
{
	if (m == n)
	{
		int *b = new int[n];
		for (int i = 0; i < n; i++)
		{
			b[i] = a[i];
		}
		n *= 2;
		a = new int[n];
			for (int i = 0; i < t; i++)
		{
			a[i] = b[i];
		}
		a[t] = x;
		for (int i = t + 1; i < n / 2; i++)
		{
			a[i] = b[i - 1];
		}
		delete[] b;
		m++;
	}
	else
    {

			//a[t] = x;
			for (int i = m; i >t; --i)
			{
				a[i] = a[i - 1];
			}
			a[t] = x;
			m++;
		}
	}
	void clearunusedmemory()
	{
		n = m;
	}
	int capacity()
	{
		return n;
	}
	bool empty()
	{
		if (m == 0)
			return false;
		return true;
	}
	int sumall()
	{
		int sum = 0;
		for (int i = 0; i < m; i++)
		{
			sum += a[i];
		}
		return sum;
	}
	void deletevalue(int r)
	{
		for (int i = r - 1; i < m; i++)
		{
			a[i] = a[i + 1];
		}
		m--;
	}


	int max()
	{
		int max = a[0];
		for (int i = 1; i < m; i++)
		{
			if (a[i] > max)
			{
				max = a[i];
			}
		}
		return max;
	}
	int min()
	{
		int min = a[0];
		for (int i = 1; i < m; i++)
		{
			if (a[i] < min)
			{
				min = a[i];
			}
		}
		return min;
	}

	int  operator [](int  n)
	{
		return a[n];
	}
};

inline void  vektor::out()
{
	for (int i = 0; i < m; i++)
	{
		cout << a[i] << " ";
	}
}
