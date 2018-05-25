Vue.js

前端轻量级的一个mvvm框架，用于构建数据驱动的 web 界面的库

angularjs  react.js  backbone knockout.js

知识储备
ES6 babel  webpack 



svn  版本控制

账号： 名字英文小写全拼
密码： 123

确定nodejs 6.0+

在线测试 浏览器对es6的支持情况
npm install -g es-checker
es-checker
http://ruanyf.github.io/es-checker/


配置babel
1、项目目录创建 .babelrc
 {
    "presets": [
      "latest",
      "react",
      "stage-2"
    ],
    "plugins": []
  }
2、安装插件
npm install -g babel-preset-latest
npm install -g babel-preset-react
npm install -g babel-preset-stage-2   0-3

3、安装执行转码 cli 
npm install -g babel-cli

4、执行转码
babel x.js -o _x.js



ES5 只有两种声明变量的方法：var命令和function命令。

ES6 除了添加let和const命令，import命令和class命令。所以，ES6 一共有6种声明变量的方法。


申明变量，存在作用域的限制，子级作用域的值，父级作用域得不到
if(true){
	let user = "1509B"
}

常量不能修改值，而且同一作用域中，变量常量调用参数，必须在声明之后调用，否则报错



ES6 允许按照一定模式，从数组和对象中提取值，对变量进行赋值，这被称为解构

方法一：
let [a,b,c] = [1,2,3];

方法二：
let [a,b,c] = new Set(["1","2","3"]); 


圆括号报错， 声明的时候变量不得添加();
let [(a)] = [1];

圆括号不报错， 声明的时候变量不得添加();

let a;
[(a)] = [1];



操作字符串三个方法

//判断字符串是否包含value，返回布尔值
str.includes("");
//判断字符串是否以value 开始，返回布尔值
str.startsWith("");
//判断字符串是否以value 结尾，返回布尔值
str.endsWith("");


//let str = "mesmeda";
//
//console.log(str.includes("m",2));
//console.log(str.startsWith("da",4));
//console.log(str.endsWith("s",3));


重复字符串

//var str = "6";
//var talk = "i love u";
//
//console.log("eat foods "+str.repeat(2)+" da");
//console.log(talk.repeat(10));


填充字符串
第一个参数拼接字符串的长度，第二个字符串，拼接的文字
//var str = "aa";
//前加
//console.log(str.padStart(5,'6'));
//console.log(str.padStart(4,'52'));
//后加
//console.log(str.padEnd(5,'6'));
//console.log(str.padEnd(4,'52'));


模板语言
通过` `来拼接html 字符串

${}表达式来传参，同时可以做一些运算操作




数值的扩展

Number.isFinite()用来检查一个数值是否为有限的（finite）。
Number.isNaN()用来检查一个值是否为NaN。
parseInt()和parseFloat()
Number.isInteger()用来判断一个值是否为整数




函数的扩展

箭头函数有几个使用注意点。

（1）函数体内的this对象，就是定义时所在的对象，而不是使用时所在的对象。

（2）不可以当作构造函数，也就是说，不可以使用new命令，否则会抛出一个错误。

（3）不可以使用arguments对象，该对象在函数体内不存在。如果要用，可以用 rest 参数代替。

（4）不可以使用yield命令，因此箭头函数不能用作 Generator 函数。

上面四点中，第一点尤其值得注意。this对象的指向是可变的，但是在箭头函数中，它是固定的。