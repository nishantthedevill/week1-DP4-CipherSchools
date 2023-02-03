ListNode* rotateRight(ListNode* head, int k)
{
	if (head == nullptr || head->next == nullptr)
	{
		return head;
	}
	ListNode* temp = head;
	int count = 1;
	while (temp->next != nullptr)
	{
		temp = temp->next;
		count++;
	}
	temp->next = head;
	k = k % count;
	k = count - k;
	while (k--)
	{
		temp = temp->next;
	}
	head = temp->next;
	temp->next = nullptr;
	return head;
}