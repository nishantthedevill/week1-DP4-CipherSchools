void removeLoop(ListNode* head)
{
	ListNode* slow = head;
	ListNode* fast = head;
	while (fast != nullptr && fast->next != nullptr)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			break;
		}
	}
	if (slow == fast)
	{
		slow = head;
		while (slow->next != fast->next)
		{
			slow = slow->next;
			fast = fast->next;
		}
		fast->next = nullptr;
	}
}