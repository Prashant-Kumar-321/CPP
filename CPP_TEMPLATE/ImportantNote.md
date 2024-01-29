# Generic Programming  

Generic Programming enables the programmer to write a General algorithm which   
will work with all data types.   
It eliminates the need to create different algorithms  for different data types such as  an integer, string, or a character etc. 

Generic Programming is an style of computer programming in which algorithms are written in terms of types to be specified later that are then initiated when needed for specific types provided as parameters.


## History 
Approach of generic Programming, pioneered by the ML(Meta Language) Programming Language  
in 1973, permits writing common functions or types that differ only in the set of types on which they operate when used, thus reducing **duplication**. 

Such software entities are known as   

--<span style="color:yellow">Generic </span>in c#, Java, Python, TypeScript, VB.NET etc  
--<span style="color:yellow">Parametric Ploymorphism</span>  in ML, SCALA, Julia  
--<span style="color:yellow">Templates</span> in C++ and D Language   

##Tempalte 
A template is a simple and a powerful tool in C++. 

The simple idea is to pass data type as a parameter so that we don't need to write the same code fo different data types. 

For example, you need to code a sort function for differnt data types. Rather than writing and maintaining multiple codes, we can write one sort() and pass data types as a parameter. 


## Generic Programming in ++ 
C++ Provide two keywords to support template 

1. <span style = "color:yellow">template</span>
2. <span style = "color:yellow">typename</span> or <span style = "color:yellow">class </span> 

Templates are expanded at compile time   
Compiled code may contain multiple copies of function/class

## Templates 
1. Function Template or Generic Function 
2. Class Template or Generic Class 

<h2>Function Template </h2>
<span style = "color:#0b60b5;"> SYNTAX</span>
<p> <span style = "color:yellow">template</span>&lt; <span style="color:red;">class </span> type &gt;  <span style="color:#ef390b;">fun_name </span> (type a, type b) <br>   
&nbsp;&nbsp;&nbsp; Function definition</p> 


## Class Template 
<span style = "color:#0b60b5;"> SYNTAX</span>
<p> <span style = "color:yellow">template</span>&lt; <span style="color:red;">Class </span> type &gt; 
<br>       &nbsp;&nbsp;&nbsp; Class definition</p>
 