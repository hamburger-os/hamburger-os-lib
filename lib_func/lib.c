#include <stdio.h>

#include <rtthread.h>

#define DBG_TAG "lib"
#define DBG_LVL DBG_LOG
#include <rtdbg.h>

int lib_func(void)
{
    LOG_D("Dynamic module automatically loaded successfully.");

    return 0;
}

int add_func(int a, int b)
{
    return (a + b);
}
