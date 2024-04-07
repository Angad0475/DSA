var hasCycle = function(head) {
    let slow = head;
    let fast = head;

    // Step 2: Traverse the linked list
    // with the slow and fast pointers
    while (fast !== null && fast.next !== null) {
        // Move slow one step
        slow = slow.next;
        // Move fast two steps
        fast = fast.next.next;

        // Check if slow and fast pointers meet
        if (slow === fast) {
            return true;  // Loop detected
        }
    }

    // If fast reaches the end of the list, there is no loop
    return false;

};
