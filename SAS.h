struct sas
{
  float ftemp,flowest,fL[100],fR[100];
  int temp,pos,i,j,loc,lowest,k,n1,n2,L[100],R[100],first=0,last,find=0,mid;
}s;
/*Binary search for Floating Point Numbers*/
int bsearch(float arr[],int N,float search)
{
  s.last=N-1;
  while((s.first <= s.last) && (s.find == 0))
  {
    s.mid = (s.first + s.last) / 2;
    if(arr[s.mid] == search)
      s.find = s.mid;
    else
      if(arr[s.mid] < search)
        s.first = s.mid + 1;
      else
        s.last = s.mid - 1;
  }
  if(s.find > 0)
    return s.find;
  else
    return s.find;
}
/*Binary search for Integer Numbers*/
int bsearch(int arr[],int N,int search)
{
  s.last=N-1;
  while((s.first <= s.last) && (s.find == 0))
  {
    s.mid = (s.first + s.last) / 2;
    if(arr[s.mid] == search)
      s.find = s.mid;
    else
      if(arr[s.mid] < search)
        s.first = s.mid + 1;
      else
        s.last = s.mid - 1;
  }
  if(s.find > 0)
    return s.find;
  else
    return s.find;
}
/*Merge Sort for Integer Numbers*/
void merge(int arr[], int l, int m, int r)
{
	 s.n1 = m - l + 1;
	 s.n2 = r - m;
   s.L[s.n1], s.R[s.n2];
	for (s.i = 0; s.i < s.n1; s.i++)
		s.L[s.i] = arr[l + s.i];
	for (s.j = 0; s.j < s.n2; s.j++)
		s.R[s.j] = arr[m + 1+ s.j];
	s.i = 0;
	s.j = 0;
	s.k = l;
	while (s.i < s.n1 && s.j < s.n2)
	{
		if (s.L[s.i] <= s.R[s.j])
		{
			arr[s.k] = s.L[s.i];
			s.i++;
		}
		else
		{
			arr[s.k] = s.R[s.j];
			s.j++;
		}
		s.k++;
	}
	while (s.i < s.n1)
	{
		arr[s.k] = s.L[s.i];
		s.i++;
		s.k++;
	}
	while (s.j < s.n2)
	{
		arr[s.k] = s.R[s.j];
		s.j++;
		s.k++;
	}
}
void msort(int arr[], int l, int r)
{
  int m;
	if (l < r)
	{
	  m = l+(r-l)/2;
		msort(arr, l, m);
		msort(arr, m+1, r);
		merge(arr, l, m, r);
	}
}
/*Merge Sort for Floating Point Numbers*/
void merge(float arr[], int l, int m, int r)
{
	 s.n1 = m - l + 1;
	 s.n2 = r - m;
   s.fL[s.n1], s.fR[s.n2];
	for (s.i = 0; s.i < s.n1; s.i++)
		s.fL[s.i] = arr[l + s.i];
	for (s.j = 0; s.j < s.n2; s.j++)
		s.fR[s.j] = arr[m + 1+ s.j];
	s.i = 0;
	s.j = 0;
	s.k = l;
	while (s.i < s.n1 && s.j < s.n2)
	{
		if (s.fL[s.i] <= s.fR[s.j])
		{
			arr[s.k] = s.fL[s.i];
			s.i++;
		}
		else
		{
			arr[s.k] = s.fR[s.j];
			s.j++;
		}
		s.k++;
	}
	while (s.i < s.n1)
	{
		arr[s.k] = s.fL[s.i];
		s.i++;
		s.k++;
	}
	while (s.j < s.n2)
	{
		arr[s.k] = s.fR[s.j];
		s.j++;
		s.k++;
	}
}
void msort(float arr[], int l, int r)
{
  int m;
	if (l < r)
	{
	  m = l+(r-l)/2;
		msort(arr, l, m);
		msort(arr, m+1, r);
		merge(arr, l, m, r);
	}
}
/*Insertion Sort For Integer Point Numbers*/
void isort(int arr[],int N)
{
  for(s.i=1;s.i<N;s.i++)
  {
    s.temp = arr[s.i];
    s.j = s.i - 1;
    while((s.temp<arr[s.j]) && (s.j >= 0))
    {
      arr[s.j + 1] = arr[s.j];
      s.j = s.j - 1;
    }
    arr[s.j + 1] = s.temp;
  }
}
/*Insertion Sort For Floating Point Numbers*/
void isort(float arr[],int N)
{
  for(s.i=1;s.i<N;s.i++)
  {
    s.ftemp = arr[s.i];
    s.j = s.i - 1;
    while((s.ftemp<arr[s.j]) && (s.j >= 0))
    {
      arr[s.j + 1] = arr[s.j];
      s.j = s.j - 1;
    }
    arr[s.j + 1] = s.ftemp;
  }
}
/*Selection Sort for Integer Numbers*/
void ssort(int arr[],int N)
{
  for(s.i=0;s.i<N-1;s.i++)
  {
    s.lowest = arr[s.i];
    s.loc = s.i;
    for(s.j=s.i+1;s.j<N;s.j++)
    {
      if(s.lowest > arr[s.j])
      {
        s.loc = s.j;
        s.lowest = arr[s.j];
      }
    }
    s.temp = arr[s.i];
    arr[s.i] = arr[s.loc];
    arr[s.loc] = s.temp;
  }
}
/*Selection Sort for Floating point Numbers*/
void ssort(float arr[],int N)
{
  for(s.i=0;s.i<N-1;s.i++)
  {
    s.flowest = arr[s.i];
    s.loc = s.i;
    for(s.j=s.i+1;s.j<N;s.j++)
    {
      if(s.flowest > arr[s.j])
      {
        s.loc = s.j;
        s.flowest = arr[s.j];
      }
    }
    s.ftemp = arr[s.i];
    arr[s.i] = arr[s.loc];
    arr[s.loc] = s.ftemp;
  }
}
/*Linear Search for Floating Point Numbers*/
int lsearch(float arr[],int N,float search)
{
  for(s.i=0;s.i<N;s.i++)
  {
    if(arr[s.i]==search)
    {
      s.pos = s.i;
    }
  }
  if(s.pos>0)
    return s.pos;
  else
    return s.pos;
}
/*Linear search for Integer Number*/
int lsearch(int arr[],int N,int search)
{
  for(s.i=0;s.i<N;s.i++)
  {
    if(arr[s.i]==search)
    {
      s.pos = s.i;
    }
  }
  if(s.pos>0)
    return s.pos;
  else
    return s.pos;
}
/*Bubble sort for Floating Point Numbers*/
void bsort(float arr[],int N)
{
  for(s.i=0;s.i<N-1;s.i++)
  {
    for(s.j=s.i+1;s.j<N;s.j++)
    {
      if(arr[s.i] > arr[s.j])
      {
        s.ftemp = arr[s.i];
        arr[s.i] = arr[s.j];
        arr[s.j] = s.ftemp;
      }
    }
  }
}
/*Bubble Sort for Integer Numbers*/
void bsort(int arr[],int N)
{
  for(s.i=0;s.i<N-1;s.i++)
  {
    for(s.j=s.i+1;s.j<N;s.j++)
    {
      if(arr[s.i] > arr[s.j])
      {
        s.temp = arr[s.i];
        arr[s.i] = arr[s.j];
        arr[s.j] = s.temp;
      }
    }
  }
}
