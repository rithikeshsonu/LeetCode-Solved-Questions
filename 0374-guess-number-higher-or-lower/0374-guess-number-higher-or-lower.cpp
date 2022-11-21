	class Solution {
	public:
		int guessNumber(int n) 
		{
			long low = 1, high = n, mid;
			while(low<=high)
			{
				mid= (low+high)/2;
				if(guess(mid)==1)           //guess API
				{
					low=mid+1;
				}
				else if(guess(mid)==-1)         //guess API
				{
					high=mid-1;
				}
				else
				{
					return mid;
				}
			}
			return low;
		}
	}; 