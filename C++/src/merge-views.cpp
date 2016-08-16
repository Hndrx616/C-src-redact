/**
 * @author Stephen Hilliard (c) 2015.
 * @developer Stephen Hilliard (c) 2015.
 */
/*Merge views*/
int merge_view(int CreditInfo, int CreditInfoold, int CreditInfonew)
{
	std::ostream& operator<<(std::ostream& ostr, const std::list<int>& list)
	{
    	for (auto &i : list) {
      	  ostr << " " << i;
    	}
    	return ostr;
	}
 
	int CreditInfo(int CreditInfoold, int CreditInfonew)
	{
    	std::list<int CreditInfoold> list1 = { Id,Date,Score };
    	std::list<int CreditInfonew> list2 = { upd.Id, upd.Score, old.Date };
 
    	list1.sort();
    	list2.sort();
   		std::cout << "list1:  " << list1 << "\n";
    	std::cout << "list2:  " << list2 << "\n";
    	list1.merge(list2);
    	std::cout << "merged: " << list1 << "\n";

    	return 0;
	}
}