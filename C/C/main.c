//
//  main.c
//  C
//
//  Created by Harwin on 2019/10/28.
//  Copyright © 2019 MyCompany. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

#define bool      int
#define false     0
#define true      1

#define INIT_SIZE 10        //初始化表长

typedef int Elemtype;

// 存储结构（线性表的元素类型）
typedef struct {
    Elemtype *elem;
    int length; // 当前长度
    int size;   // 当前分配的表的大小
}Sqlist;

// 初始化空的线性表
bool initList(Sqlist *L)
{
//    L->elem = (Elemtype *)malloc(INIT_SIZE * sizeof(Elemtype));
//    if (!L->elem) {
//        return false;
//    }
//    L->length = 0;
//    L->size = INIT_SIZE;
//    printf("线性表初始化成功\n");
    return true;
}

// 插入操作
bool listInsert(Sqlist *L, int i, Elemtype *elem)
{
//    if (i < 1 || i > L->size) {
//        return false;
//    }
//
//    Elemtype *p = &L->elem[i - 1];
//    Elemtype *q = &L->elem[L->length - 1];
//
//    for (; q >= p; q--) {
//        *(q + 1) = *p;
//    }
//
//    *p = *elem;
//    ++L->length;
//
//    printf("L->elem = %p\n", L->elem);
//    printf("L->length = %d\n", L->length);
    printf("L->size= %d\n", L->size);
    return true;
}

// 销毁线性表
bool destroyList(Sqlist *L)
{
    free(L->elem);
    L->length = 0;
    L->size = 0;
    return true;
}



#pragma mark -----------
//当在子函数中需要修改主函数某一个一级指针变量的值，需要用到二级指针
void change (int **p,int *q){
    *p = q;
}

// 二级指针
void day1030 ()
{
    int i = 10;
    int j = 5;
    int *pi = &i;
    int *pj = &j;
    printf("%d-%d-%d-%d\n",i,j,*pi,*pj);
    printf("%p-%p-%p-%p\n",&i,&j,pi,pj);

    change(&pi, pj);// 需要把该变量的地址值传给子函数
    printf("%d-%d-%d-%d\n",i,j,*pi,*pj);
    printf("%p-%p-%p-%p\n",&i,&j,pi,pj);
    
    // 二级存储的是某一个指针变量的地址值
    int **p2 = &pi;
    printf("%d-%p\n",**p2,&p2);
}

// 二级指针的偏移




int main(int argc, const char *argv[])
{
    // insert code here...
    printf("Hello, World!\n");
    
    day1030();
    
    
    // 创建一个线性表
    Sqlist *l;
    
//    if (initList(l)) {
//
//    }
    return 0;
}

