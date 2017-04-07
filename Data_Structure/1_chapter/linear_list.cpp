// Linear_list basic operation
1. InitList(&L)
2. Length(L)
3. LocateElem(L,e)
4. GetElem(L,i)
5. ListInsert(&L,i,e)
6. ListDelete(&L,i,&e)
7. PrintList(L)
8. Empyt(L)
9. DestroyList(&L)

// linear_list static dis memory define
# define MaxSize 50
typedef struct {
  ElemType data[MaxSize];
  int length;
}SqList;

// line_list dynamic dis memory define
# define InitSize 100
typedef struct {
  Elemtype *data;
  int MaxSize, length;
}SeqList;

// list insert operation come true
bool ListInsert(SqList &L, int i, ElemType e){
  if (i<1 || i>L.length+1)
    return false;
  if (L.length>=MaxSize)
    return false;
  for (j=L.length; j>=i; j--)
    data[i] = data[i-1];
  data[i-1] = e;
  L.length++;
  return true;
}
