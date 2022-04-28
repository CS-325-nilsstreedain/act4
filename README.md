# Activity 4
You may work in groups with up to 3 students. When submitting solutions in Gradescope select a page for each problem and the students in your group.

## Written: (5 pts)
Cookie Problem: Suppose you are baby-sitting n children and have m ≥ n cookies to divide between them. You must give each child exactly one cookie (of course, you cannot give the same cookie to two different children). Each child has a greed factor gi; 1 ≤ i ≤ n which is the minimum size of a cookie that the child will be content with; and each cookie has a size sj ; 1 ≤ j ≤ m. Your goal is to maximize the number of content children, that is the number of children i assigned a cookie j with gi ≥ sj .

1. Give a written description of a greedy algorithm to distribute cookies while maximizing the total contentment level of the children. What is your greedy criteria? Give an “informal” proof of correctness for your greedy choice.
```
So we first sort by the greed of the children and the size of the cookies
indescending order. Then, for each child, we find a cookie that will satisfy
them, and if we run out of cookies, we’re done. By sorting both lists in
descending order, we guarantee that we’re giving the most possible kids cookies
because if a cookie doesn’t satisfy the current child, it will not satisfy any
child. And then if we run out of cookies, there are no more children that can be
satisfied.
```
2. Give pseudocode for your greedy algorithm to distribute cookies.
```
Sort(greed)
Sort(cookies)

cookieCounter = 0
j=0

for i = 0; i < n; i++
  While greed[i] > cookie[j]
    J++
  If j < m
    cookieCounter++
    j++
Return cookieCounter
```
4. What is the running time of your algorithm?
```
The algorithm itself is theta(m), however because of our sorts (which in this
case we will assume is merge sort because of our template code), and the fact
that m <= n we get a run time of theta(nlgn)
```

## Code: (10 pts)
Implement your algorithms for the Cookie Problem in C++. The test cases have the following structure

Input:
```
4             // number of children
10 8 9 12     // children’s greed
5             // number of cookies
11 4 6 3 9    // cookie sizes
```

Output:
```
Max contentment = 2
```

The input consists of n the number of children, followed by n greed levels, m the number of cookies and then m cookie sizes The output is the maximum number of content children.

You can use the code template provided. The name of file you submit to Gradescope must be act4.cpp. You may submit multiple times. Select all group member names each time you submit and also include the names of the group member in your comments.
