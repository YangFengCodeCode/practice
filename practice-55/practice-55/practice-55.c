#define _CRT_SECURE_NO_WARNINGS


//#include<stdio.h>
//int main()
//{
//	FILE* pf = fopen("data.txt", "w");
//
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	/*写文件
//    fputc('a', pf)
//    fputc('b', pf)
//    fputc('c', pf)*/
//	int i = 0;
//	for (i = 0; i < 26; i++)
//	{
//		fputc('a' + i, pf);//如果想从屏幕上显示 把pf改成stdout
//	}
//
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}






//int removeElement(int* nums, int numsSize, int val)
//{
//	int src = 0, dst = 0;
//	while (src < numsSize)
//	{
//		if (nums[src] != val)
//		{
//			nums[dst] = nums[src];
//			dst++;
//		}
//
//		src++;
//	}
//
//	return dst;
//}


//void merge(int* nums1, int m, int* nums2, int n)
//{
//
//	int end1 = m - 1, end2 = n - 1, end = m + n - 1;
//
//	while (end1 >= 0 && end2 >= 0)
//	{
//		if (nums1[end1] >= nums2[end2])
//		{
//			nums1[end] = nums1[end1];//注意左值和右值 左值是可以修改的
//			end1--;
//		}
//
//		else
//		{
//			nums1[end] = nums2[end2];
//			end2--;
//		}
//
//		end--;
//	}
//
//	while (end2 >= 0)
//	{
//		nums1[end] = nums2[end2];
//		end2--;
//		end--;
//	}
//}



int removeDuplicates(int* nums, int numsSize)
{

	int dst = 0, src = 1;
	while (src < numsSize)
	{
		if (nums[dst] == nums[src])
		{
			src++;
		}
		else
		{
			dst++;
			nums[dst] = nums[src];
			src++;
		}
	}
	return dst + 1;
}