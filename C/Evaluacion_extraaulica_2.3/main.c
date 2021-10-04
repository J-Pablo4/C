#include <stdio.h>

void merge(int[], int, int, int);
void mergeSort(int[], int, int);

int main()
{
  
  // Los números divisibles
  int N;
  int array2[1001];
  int num_div[1001];
  int org[1001];
  int i;
  int var;
  int var1;
  int cont;
  printf("N: ");
  scanf("%d", &N);

  for (i = 1; i <= N; i++)
  {
    array2[i-1] = i;
    cont = 0;
    for(int c=1; c<=N; c++)
    {
      if(i%c ==0)
      {
        cont++;
      }
    }
    num_div[i-1] = cont;
  }
  
  for(int e=0; e <N; e++)
  {
    for (int f=0; f <N; f++)
    {
      if (num_div[e] > num_div[f])
      {
        var = num_div[e];

        var1 = array2[e];        

        num_div[e] = num_div[f];

        array2[e] = array2[f];

        num_div[f] = var;

        array2[f] = var1;        

      }
    }
  }
  int ls=0;
  int temp =0, g,hl=0;
  for (g=0; g<=N; g++)
  {
    temp = hl;
    cont = num_div[g];
    if(cont == num_div[g+1])
    {
      org[ls] = array2[g];
      ls++;
      org[ls] = array2[g+1];
    }
    else if (cont != num_div[g+1] && ls !=0)
    {
      mergeSort(org, 0, ls);
      for (int sdf = 0; sdf <= ls ; sdf++)
      {
        array2[temp] = org[sdf];
        temp++;
      }
      ls = 0;
      hl = temp;
    }
    else if (cont != num_div[g+1])
    {
      hl++;
    }
    
    
  }   

  for(int z = 0; z < N; z++)
  {
    if(z==0)
    {
      printf("%d",array2[z]);
    }
    else
      printf(", %d",array2[z]);
  }
    return 0;
}

void mergeSort(int org[], int l, int r)
{
  if (l < r)
  {
    int m = l + (r - l)/2;
    mergeSort(org, l, m);
    mergeSort(org, m+1, r);
    merge(org, l, m, r);
  }
}

void merge(int org[], int l, int m, int r)
{
  int i, j, k;
  int n1 = m - l + 1;
  int n2 = r - m;

  int L[n1], R[n2];

  for (i = 0; i < n1; i++)
  {
    L[i] = org[l + i];
  }
  for (j = 0; j < n2; j++)
  {
    R[j] = org[m + 1 + j];
  }

  i = 0;
  j = 0;
  k = l;
  while (i < n1 && j < n2)
  {
    if (L[i] <= R[j])
    {
      org[k] = L[i];
      i++;
    }
    else
    {
      org[k] = R[j];
      j++;
    }
    k++;
  }
  
  while (i < n1)
  {
    org[k] = L[i];
    i++;
    k++;
  }
  while (j < n2)
  {
    org[k] = R[j];
    j++;
    k++;
  }
  
} 
