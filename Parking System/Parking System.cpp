//FINAL PROJECT 
//AMIRUL AFIQ BIN ZAKIR HAMDI
#include <iostream>
using namespace std;

int main()
{
    int i;
	int hari, harihari = 0, in, out, masa, Tolakdua, Tolakdua1;
	double bayaran1, bayaran, Totalbayaran = 0;
	double Ba = 0;
	int FTwoHour = 14;
	char choice = 'n';
	float Discount;
	
	do {
    cout << "\nBerapakah hari anda parking disini? : ";
    cin >> harihari;
    cout << "Kiraan untuk " << harihari << " hari." << endl;

    for (i = 0; i < harihari; ++i)
    {

    cout << "\n** Hari " << i + 1 << " *** " << endl;
	
	cout << "Selamat Datang ke ParkingABC456" << endl;
	cout<<"=============================="<<endl;
	cout<<"Tekan 1 - Isnin"<<endl;
	cout<<"Tekan 2 - Selasa"<<endl;
	cout<<"Tekan 3 - Rabu"<<endl;
	cout<<"Tekan 4 - Khamis"<<endl;
	cout<<"Tekan 5 - Jumaat"<<endl;
	cout<<"Tekan 6 - Sabtu"<<endl;
	cout<<"Tekan 7 - Ahad"<<endl;
	cout<<"Tekan 8 - Cuti Umum"<<endl;
	cout<<"=============================="<<endl;
	cout << "Sila pilih hari...." << endl;
	cin >> hari;

	if ((hari == 1) || (hari == 2) || (hari == 3) || (hari == 4) || (hari == 5))
	{
		cout << "Sila beri masa masuk (Sistem24Jam)" << endl;
		cin >> in;
		cout << "Sila beri masa keluar (Sistem24Jam)" << endl;
		cin >> out;





       //AFTER OFFICE HOUR 7MALAM - 12MALAM & DISCOUNT 30% (10MALAM - 12MALAM)
		if ((in >= 19) && (out <= 24))
		{
		    masa = (in - out);
		    cout << "Berapa jam anda parking (Diskaun)?" << endl;
	        cout << "( " << masa << " Jam )" << endl;
		    
	    	if ((masa < 4) && (out>= 22))
	    	{
			    masa = (out - in) - 2;
			    bayaran1 = 8 + (masa * 4);
		    	cout << "Sila bayar RM " << bayaran1 << endl;
		    }
		    
		    else if ((in >= 19) && (out<= 24))
		    {
		        masa = (out - in) - 2;
			    bayaran1 = 8 + (masa * 4);
		    	cout << "Sila bayar RM " << bayaran1 << endl;
		    }
		    	
		    else if ((masa >= 4) && (out>= 22))
			{
			    Discount = 0.3;
			    masa = (out - in) - 2;
			    bayaran = (8 + (masa * 4))*Discount;
			    bayaran1 = (8 + (masa * 4)) - (bayaran);
		    	cout << "Anda mendapat Discount 30% Untuk parking selama 4 jam dan lebih pada waktu (10MALAM - 7MALAM), Sila bayar RM " << bayaran1 << endl;
			}
        }
		
		
		
		
		
		//AFTER OFFICE HOUR 12PAGI - 10PAGI & DISCOUNT 30% (>4 jam) (10MALAM - 12MALAM)
		else if ((in >= 0) && (out <= 10))
		{
		    masa = out;
		    cout << "Berapa jam anda parking (Diskaun)?" << endl;
	    	cout << "( " << masa << " Jam )" << endl;
		    
		    if (masa < 4)
		    {
			    masa = (out - in) - 2;
		    	bayaran1 = 8 + (masa * 4);
			    cout << "Sila bayar RM " << bayaran1 << endl;
		    }
		    
		    else if (masa >= 4)
		    {
		        Discount = 0.3;
		    	masa = (out - in) - 2;
			    bayaran = (8 + (masa * 4))*Discount;
			    bayaran1 = (8 + (masa * 4)) - (bayaran);
			    cout << "Anda mendapat Discount 30% Untuk parking selama 4 jam dan lebih pada waktu (10MALAM - 7MALAM), Sila bayar RM "<< bayaran1 << endl;
		    }
		}
		
		
		
		
		
		//OFFICE HOUR 10PAGI - 7MALAM & DISCOUNT 30% (>4 jam) (10MALAM - 12MALAM)
		else if ((in >= 10) && (out <= 19))
		{
		    
		    masa = (out - in);
	    	cout << "Berapa jam anda parking (Diskaun)?" << endl;
		    cout << "( " << masa << " Jam )" << endl;
		
		    if (masa < 4)
	    	{
			    masa = (out - in) - 2;
			    bayaran1 = 8 + (masa * 6);
			    cout << "Sila bayar RM "<< bayaran1 << endl;
	    	}

	    	else if (masa >= 4) 
		    {
		        Discount = (0.3);
			    masa = (out - in) - 2;
			    bayaran = (8 + (masa * 6))*Discount;
			    bayaran1 = (8 + (masa * 6)) - (bayaran);
			    cout << "Anda mendapat Discount 30% Untuk parking selama 4 jam dan lebih pada waktu (10MALAM - 7MALAM), Sila bayar RM "<< bayaran1 << endl;
	    	}
	    }
		
		
		
		
		
		//GABUNGAN OFFICE HOUR DAN AFTER OFFICE HOUR 1 (10 PAGI - 12MALAM) & DISCOUNT 30% (>4 jam) (10PAGI - 12MALAM)
		else if ((in >= 10) && (out <= 24))
		{
		    
	    	masa = (out - in);
		    cout << "Berapa jam anda parking (Diskaun)?" << endl;
	    	cout << "( " << masa << " Jam )" << endl;	

	    	if (masa < 4)
	    	{
   			    Tolakdua = (out - 2);
			    bayaran1 =  8 + ((17 - in) *6) + ((Tolakdua - 17) *4);  
			    cout << "Sila bayar RM "<< bayaran1 << endl;
	    	}

		    else if ((masa >= 4) && (out <= 19))
		    {
		        Discount = (0.3);
		  	    Tolakdua = (out - 2);
			    bayaran = (8 + ((17 - in) *6) + ((Tolakdua - 17) *4))*Discount;
			    bayaran1 =  (8 + ((17 - in) *6) + ((Tolakdua - 17) *4)) - (bayaran);  
			    cout << "Anda mendapat Discount 30% Untuk parking selama 4 jam dan lebih pada waktu (10MALAM - 7MALAM), Sila bayar RM "<< bayaran1 << endl;
	    	}
	    	
	    	else if ((in >= 19) && (out<= 24))
		    {
		        masa = (out - in) - 2;
			    bayaran1 = 8 + (masa * 4);
		    	cout << "Sila bayar RM " << bayaran1 << endl;
		    }
		    	
		    else if ((masa >= 4) && (out>= 22))
			{
			    Discount = 0.3;
			    masa = (out - in) - 2;
			    bayaran = (8 + (masa * 4))*Discount;
			    bayaran1 = (8 + (masa * 4)) - (bayaran);
		    	cout << "Anda mendapat Discount 30% Untuk parking selama 4 jam dan lebih pada waktu (10MALAM - 7MALAM), Sila bayar RM " << bayaran1 << endl;
			}
			
		}
		
		
		
		
		
		//GABUNGAN AFTER OFFICE HOUR 2 DAN OFFICE HOUR (12 PAGI - 7MALAM) & DISCOUNT 30% (>4 jam) (12PAGI - 7MALAM)
		else if ((in >= 0) && (out <= 19)) 
		{
		    
		    masa = (out - in);
		    cout << "Berapa jam anda parking (Diskaun)?" << endl;
	    	cout << "( " << masa << " Jam )" << endl;	

		    if (masa < 4)
		    {
		        Tolakdua1 = (in - 2);
			    bayaran1 =  8 + ((17 - Tolakdua1) *4) + ((out - 17) *6) - 2;   
			    cout << "Sila bayar RM " << bayaran1 << endl;
	    	}

		    else if (masa >= 4) 
		    {
		        Discount = (0.3);
		        Tolakdua1 = (in - 2);
			    bayaran = (8 + ((17 - Tolakdua1) *4) + ((out - 17) *6) - 2)*Discount;
			    bayaran1 = (8 + ((17 - Tolakdua1) *4) + ((out - 17) *6) - 2) - (bayaran);  
			    cout << "Anda mendapat Discount 30% Untuk parking selama 4 jam dan lebih pada waktu (10MALAM - 7MALAM), Sila bayar RM "<< bayaran1 << endl;
		    }
		}
		
		
		
		
		
		//SEMUA GABUNGAN DARIPADA (0 - 24)
		else if ((in >= 0) && (out <= 24))
		{
		    
		    masa = (out - in);
		    cout << "Berapa jam anda parking waktu pejabat disini?" << endl;
	    	cout << "( " << masa << " Jam )" << endl;	

            if (out == 20)
            {
		        Discount = (0.3);
                Tolakdua = (out - 2);
		        Tolakdua1 = (in - 2);
		        bayaran = ((8 + (((20 - Tolakdua1) *4) + ((out - 20) *6) - 2 + ((Tolakdua - 20) *4)))+ 8)*Discount;
			    bayaran1 =  ((8 + (((20 - Tolakdua1) *4) + ((out - 20) *6) - 2 + ((Tolakdua - 20) *4)))+ 8) - (bayaran) + 4;   	
			    cout << "Anda mendapat Discount 30% Untuk parking selama 4 jam dan lebih pada waktu (10MALAM - 7MALAM), Sila bayar RM "<< bayaran1 << endl;
	         }
	         
	       else if (out == 21)
            {
		        Discount = (0.3);
                Tolakdua = (out - 2);
		        Tolakdua1 = (in - 2);
		        bayaran = ((8 + (((20 - Tolakdua1) *4) + ((out - 20) *6) - 2 + ((Tolakdua - 20) *4)))+ 8)*Discount;
			    bayaran1 =  ((8 + (((20 - Tolakdua1) *4) + ((out - 20) *6) - 2 + ((Tolakdua - 20) *4)))+ 5) - (bayaran) + 4;   	
			    cout << "Anda mendapat Discount 30% Untuk parking selama 4 jam dan lebih pada waktu (10MALAM - 7MALAM), Sila bayar RM "<< bayaran1 << endl;
	        }
	        
	        else if (out == 22)
            {
		        Discount = (0.3);
                Tolakdua = (out - 2);
		        Tolakdua1 = (in - 2);
		        bayaran = ((8 + (((20 - Tolakdua1) *4) + ((out - 20) *6) - 2 + ((Tolakdua - 20) *4)))+ 8)*Discount;
			    bayaran1 =  ((8 + (((20 - Tolakdua1) *4) + ((out - 20) *6) - 2 + ((Tolakdua - 20) *4)))+ 2) - (bayaran) + 4;   	
			    cout << "Anda mendapat Discount 30% Untuk parking selama 4 jam dan lebih pada waktu (10MALAM - 7MALAM), Sila bayar RM "<< bayaran1 << endl;
	        }
	        
	        else if (out == 23)
            {
		        Discount = (0.3);
                Tolakdua = (out - 2);
		        Tolakdua1 = (in - 2);
		        bayaran = ((8 + (((20 - Tolakdua1) *4) + ((out - 20) *6) - 2 + ((Tolakdua - 20) *4))))*Discount;
			    bayaran1 =  ((8 + (((20 - Tolakdua1) *4) + ((out - 20) *6) - 2 + ((Tolakdua - 20) *4)))+ 2) - (bayaran);   	
			    cout << "Anda mendapat Discount 30% Untuk parking selama 4 jam dan lebih pada waktu (10MALAM - 7MALAM), Sila bayar RM "<< bayaran1 << endl;
	        }
	        
	        else if (out == 24)
            {
		        Discount = (0.3);
                Tolakdua = (out - 2);
		        Tolakdua1 = (in - 2);
		        bayaran = ((8 + (((20 - Tolakdua1) *4) + ((out - 20) *6) - 2 + ((Tolakdua - 20) *4)))+ 10)*Discount;
			    bayaran1 =  ((8 + (((20 - Tolakdua1) *4) + ((out - 20) *6) - 2 + ((Tolakdua - 20) *4)))) - (bayaran) + 1;   	
			    cout << "Anda mendapat Discount 30% Untuk parking selama 4 jam dan lebih pada waktu (10MALAM - 7MALAM), Sila bayar RM "<< bayaran1 << endl;
	        }
		}

	}
	
	
	//SELESAI
	else if ((hari == 6) || (hari == 7)) //SABTU AHAD
	{
		cout << "Sila beri masa masuk (Sistem24Jam)" << endl;
		cin >> in;
		cout << "Sila beri masa keluar (Sistem24Jam)" << endl;
		cin >> out;

		if ((in >= 0) && (out <= 24)) 
		{
			masa = (out - in) - 2;
			bayaran1 = 8 + (masa * 3);
			cout << "Sila bayar RM " << bayaran1 << endl;
		}
	}
	
	
	//SELESAI
	else if (hari == 8)//CUTI UMUM
	{
		cout << "Sila beri masa masuk (Sistem24Jam)" << endl;
		cin >> in;
		cout << "Sila beri masa keluar (Sistem24Jam)" << endl;
		cin >> out;

		if ((in >= 0) && (out <= 24))
		{
			masa = (out - in) - 2;
			bayaran1 = FTwoHour + (masa * 3);
			cout << "Sila bayar RM " << bayaran1 << endl;
		}
	}
	        if (harihari < 4)
	        {
            Totalbayaran += bayaran1;
            Ba = Totalbayaran;
	        }
	        
	        else if (harihari >= 4)
	        {
	        Discount = (0.3);
	        Totalbayaran += bayaran1;
			bayaran = (Totalbayaran)*Discount;
            Ba = (Totalbayaran) - (bayaran);
	        }

	}
	
	    cout << "" << endl;
	    cout << "\nUntuk kesemua " << i << " hari yang ingin dikira: " << endl;
	    cout << "Anda akan mendapat Discount 30% Untuk parking selama 4 hari dan lebih" << endl;
	    cout << "---------------------------------------------------" << endl;
        cout << "\nJumlah hari: ------- " << harihari << endl;
        cout << "Jumlah bayaran: --- " << Ba << endl;
	    cout << "---------------------------------------------------" << endl;
	    cout << "" << endl;
	    
		cout << "\n\nAdakah anda ingin memulakan program semula? (Y/ANY BUTTON) ";
        cin >> choice; choice = toupper(choice);
    
    } while (choice == 'Y' && 'y');


	system("Pause");
	return 0;
}
