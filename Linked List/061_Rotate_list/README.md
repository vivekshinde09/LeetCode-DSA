# Rotate List

## Description
This program rotates a singly linked list to the right by k positions using C++.

## Approach
Calculate the length of the linked list and find the last node. Use modulo to reduce unnecessary rotations. Connect the last node to the head to form a circular list. Find the new tail and break the circular link to obtain the rotated list.

## Complexity
Time Complexity O(n)

Space Complexity O(1)

## Return Value
Return the new head of the rotated linked list.