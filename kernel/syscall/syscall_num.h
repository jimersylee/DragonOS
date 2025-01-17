#pragma once

/**
 * 系统调用说明
 * 1    printf
 * 
 * 
 * 255  AHCI end_request
 * 
 */

#define SYS_NOT_EXISTS 0
#define SYS_PUT_STRING 1
#define SYS_OPEN 2
#define SYS_CLOSE 3
#define SYS_READ 4
#define SYS_WRITE 5
#define SYS_LSEEK 6
#define SYS_FORK 7
#define SYS_VFORK 8
#define SYS_BRK 9
#define SYS_SBRK 10

#define SYS_REBOOT 11   // 重启
#define SYS_CHDIR 12    // 切换工作目录
#define SYS_GET_DENTS 13 // 获取目录中的数据
#define SYS_EXECVE 14 // 执行新的应用程序
#define SYS_WAIT4 15 // 等待进程退出
#define SYS_EXIT 16 // 进程退出
#define SYS_MKDIR 17 // 创建文件夹

#define SYS_AHCI_END_REQ 255    // AHCI DMA请求结束end_request的系统调用