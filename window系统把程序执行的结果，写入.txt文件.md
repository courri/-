首先你打开`cmd`，我们做一个例子：
把`dir`命令输出的内容写入`.txt`文件

执行 `dir`，你会看到一些输出结果：

继续执行：

`dir > d:\test.txt`

你会在d盘看到你想要的文件`text.txt`。


我们在d盘新建一个 `quine.c `文件 (自己表述自己)
```
#include <stdio.h> static char sym[] = "\n\t\\\""; int main(void) {const char *code = "#include <stdio.h>%c%cstatic char sym[] = %c%cn%ct%c%c%c%c%c;%c%cint main(void) {%c%cconst char *code = %c%s%c;%c%cprintf(code, sym[0], sym[0], sym[3], sym[2], sym[2], sym[2], sym[2], sym[2], sym[3], sym[3], sym[0], sym[0], sym[0], sym[1], sym[3], code, sym[3], sym[0], sym[1], sym[0], sym[0], sym[1], sym[0], sym[0]);%c%c%creturn 0;%c}%c";[printf](http://www.opengroup.org/onlinepubs/009695399/functions/printf.html)(code, sym[0], sym[0], sym[3], sym[2], sym[2], sym[2], sym[2], sym[2], sym[3], sym[3], sym[0], sym[0], sym[0], sym[1], sym[3], code, sym[3], sym[0], sym[1], sym[0], sym[0], sym[1], sym[0], sym[0]); return 0;}
```

进入`cmd`界面，依次执行：

```
d:

gcc quine.c

a.exe

a.exe >   d:\test1.txt

```

---

这样我们就把程序执行的结果，写入了`txt`文件。


