ListNode* mergeKSortedLinkedList(vector<ListNode*> lists)
{
	if (lists.size() == 0)
	{
		return nullptr;
	}
	else if(lists.size() == 1)
	{
		return lists[0];
	}
	else if(lists.size() == 2)
	{
		return mergeTwoLists(lists[0], lists[1]);
	}
	else
	{
		int mid = lists.size() / 2;
		vector<ListNode*> left;
		vector<ListNode*> right;
		for (int i = 0; i < mid; i++)
		{
			left.push_back(lists[i]);
		}
		for (int i = mid; i < lists.size(); i++)
		{
			right.push_back(lists[i]);
		}
		return mergeTwoLists(mergeKSortedLinkedList(left), mergeKSortedLinkedList(right));
	}
}
