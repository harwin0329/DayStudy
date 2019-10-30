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
    L->elem = (Elemtype *)malloc(INIT_SIZE * sizeof(Elemtype));
    if (!L->elem) {
        return false;
    }
    L->length = 0;
    L->size = INIT_SIZE;
//    printf("初始化空的线性表成功\n");
//    printf("L地址=%p\n", &L);
//    printf("L->elem = %p\n", L->elem);
//    printf("L->length = %d\n", L->length);
//    printf("L->size= %d\n", L->size);
    return true;
}

// 插入操作
bool listInsert(Sqlist *L, int i, Elemtype *elem)
{
    if (i < 1 || i > L->size) {
        return false;
    }

    Elemtype *p = &L->elem[i - 1];
    Elemtype *q = &L->elem[L->length - 1];

    for (; q >= p; q--) {
        *(q + 1) = *p;
    }

    *p = *elem;
    ++L->length;

    printf("L->elem = %p\n", L->elem);
    printf("L->length = %d\n", L->length);
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

int main(int argc, const char *argv[])
{
    // insert code here...
    printf("Hello, World!\n");

//    // 创建一个线性表
//    Sqlist l;
//    if (initList(&l)) {
////        listInsert(&l, 0, (void *)1
//        listInsert(&l, 2, (void *)3);
//    }

//    for (int i = 0; i < argc; i++) {
//        printf("%d", atoi(argv[i]));
//    }

    char *s = "abcde";
    printf("%p",s);
    s+=2;
    printf("%p",s);

    return 0;
}
