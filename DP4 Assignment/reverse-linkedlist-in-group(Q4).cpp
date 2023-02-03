ListNode* reverseLinkedListInGroup(ListNode* head, int k)
{
	ListNode* curr = head;
	ListNode* next = nullptr;
	ListNode* prev = nullptr;
	int count = 0;
	while (curr != nullptr && count < k)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
		count++;
	}
	if (next != nullptr)
	{
		head->next = reverseLinkedListInGroup(next, k);
	}
	return prev;
}