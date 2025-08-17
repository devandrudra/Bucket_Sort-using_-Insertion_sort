# Introduction
## What is Bucket Sort
Bucket Sort is a sorting algorithm that:<br>
1. Divides elements into several ranges called buckets<br>

2. Sorts each bucket individually (using another sorting algorithm like Insertion Sort)<br>

3. Merges all the sorted buckets to get the final sorted list<br>

Note: It's very efficient when data is uniformly distributed over a known range, especially between 0 and 1 or a small integer range.

## How it works(practically)
### How Bucket Sort Works – Step-by-Step

1. Create buckets (empty lists)<br>

2. Distribute the elements into these buckets based on value<br>

3. Sort each individual bucket<br>

4. Concatenate all buckets sequentially<br>

### Example- 
arr = {0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434, 0.611};<br>

Bucket Display: <br>
0-><br>
1->0.1234 <br>
2-><br>
3->0.3434 <br>
4-><br>
5->0.565 <br>
6->0.656 0.665 0.611 <br>
7-><br>
8->0.897 <br>
9-><br>

Bucket After Performing Insertion Sort: <br>
0-><br>
1->0.1234 <br>
2-><br>
3->0.3434 <br>
4-><br>
5->0.565 <br>
6->0.611 0.656 0.665 <br>
7-><br>
8->0.897 <br>
9-><br>

Sorted Araay: <br>
{0.1234, 0.3434, 0.565, 0.611, 0.656, 0.665, 0.897}<br>


## ✅ Best suited for:

Floating-point numbers between 0 and 1<br>

Uniformly distributed values<br>

Small range integer values<br>

## ⏱ Complexity
Case	 :    Time<br>
Best Case	: O(n + k)<br>
Average	:     O(n + k)<br>
Worst	:     O(n²) (if all elements  go in one bucket)<br>

Space Complexity: O(n + k)<br>

n: Number of Element<br>
k: NUmber of bucket created<br>

