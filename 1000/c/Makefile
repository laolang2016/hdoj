# 功能：单一目录，只含有标准C程序的的Makefile的写法
# 时间：2015/10/11 20:32:04
# 作者：小代码





# 默认的可执行文件的名字
program=hello

# C编译器
CC=gcc
# C编译选项
CFLAGS=-Wall
# 删除命令
RM=rm -rf
# 源文件列表
srcs=$(wildcard *.c)
# .o文件列表
objs=$(patsubst %.c,%.o,${srcs})
# 默认的目标，生成可执行程序
all:${program}
${program}:${objs}
	${CC} -o $@ $^


.PHONY:exec clean rebuild list
# 执行
exec:${program}
	./${program}
# 清理
clean:
	-${RM} ${objs}
	-${RM} ${program}
# 重新编译
rebuild:clean ${program}

# 输出源文件列表，.o文件列表，以及可执行程序的名称
list:
	@echo ${srcs}
	@echo ${objs}
	@echo ${program}
