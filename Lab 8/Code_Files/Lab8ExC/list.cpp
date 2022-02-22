//ENSF 337 Lab 8- Ex.C
//list.cpp
//Creator: Aarushi Roy Choudhury

#include "list.h"

ListItem::ListItem(int year,double flow){
    this->year = year;
    this->flow = flow;
}
ListItem::ListItem(){
    this->year = 0 , this->flow = 0;
}

Node::Node(int year,double flow)
{
    this->item = ListItem(year,flow);
    this->next = nullptr;
}

FlowList::FlowList()
{
    head = nullptr; 
}
Node *FlowList::add(ListItem item)
{
    Node *newNode = new Node(item.year,item.flow); 
    if (head == nullptr)
    {
        
        head = newNode;
        return head;
    }
    
    Node *curr = head;
    Node *prev = nullptr;
    while (curr != nullptr && curr->item.year < newNode->item.year)
    {
        
        prev = curr;
        curr = curr->next;
    }
    if (curr == nullptr)
    {
        
        prev->next = newNode; 
        return newNode;
    }
   
    if (curr->item.year == item.year)
    {
        
        return nullptr;
    }
    
    if (prev == nullptr)
    {
        head = newNode;
        newNode->next = curr;
        return newNode;
    }
    
    prev->next = newNode;
    newNode->next = curr;
    return newNode;
}
Node *FlowList::_delete(int year)
{
    Node *curr = head;
    Node *prev = nullptr;
    
    while (curr != nullptr && curr->item.year != year)
    {
        
        prev = curr;
        curr = curr->next;
    }
    if (curr == nullptr)
    {
        
        return nullptr;
    }
    
    if (prev == nullptr)
    {
        
        head = curr->next;
        curr->next = nullptr;
        return curr;
    }
    
    prev->next = curr->next;
    curr->next = nullptr;
    return curr;
}