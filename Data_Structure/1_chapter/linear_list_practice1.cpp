// delete the min elem and copy the latest elem to the min
bool Del_min(SqList &L, ElemType &value){
  if (L.length == 0)
    return false;
  value = L.data[0];
  int pos = 0;
  for(i=1;i<L.length;i++)
    if (L.data[i]<value){
      value = L.data[i];
      pos = i;
  }
  L.data[pos] = L.data[L.length-1];
  L.length--;
}

// Element reversal
void Reverse(SqList &L) {
  ElemType temp;
  for(i=0;i<L.length/2;i++){
    temp = L.data[i];
    L.data[i] = L.data[L.length-i-1];
    L.data[L.length-i-1] = temp;
  }
}

// Delete the same element X
void del_x_1(SqList &L; ElemType x){
  int k = 0;
  for(i=0;i<L.length;i++)
    if (L.data[i] != x){
      L.data[k] = L.data[i];
      k++;
    }
  L.length = k;
}

void del_x_2(SqList &L, ElemType x){
  int k=0,i=0;
  while(i<L.length){
    if(L.data[i] == x)
      k++;
    else
      L.data[i-k] = L.data[i];
    i++;
  }
  L.length = L.length-k;
}
