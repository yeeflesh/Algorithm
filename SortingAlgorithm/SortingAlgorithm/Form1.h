#include<iostream>
#include<stack>
#include<ctime>
using namespace std;
#pragma once

namespace SortingAlgorithm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace ZedGraph;

	/// <summary>
	/// Form1 的摘要
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 在此加入建構函式程式碼
			//
			zedGraphControl1->GraphPane->Title->Text="Sorting Algorithm";
			zedGraphControl1->GraphPane->XAxis->Title->Text="Data";
			zedGraphControl1->GraphPane->YAxis->Title->Text="CPU Time";
			zedGraphControl1->GraphPane->Fill=gcnew Fill(Color::White,Color::FromArgb(200,200,255),40.0F);
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	protected: 
	private: System::Windows::Forms::CheckedListBox^  checkedListBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器
		/// 修改這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Dock = System::Windows::Forms::DockStyle::Right;
			this->zedGraphControl1->Location = System::Drawing::Point(271, 0);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(672, 620);
			this->zedGraphControl1->TabIndex = 0;
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->CheckOnClick = true;
			this->checkedListBox1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(10) {L"Bubble Sort", L"Selection Sort", L"Insertion Sort", 
				L"Shell Sort", L"Merge Sort (recursive)", L"Merge Sort (non-recursive)", L"Quick Sort (recursive)", L"Quick Sort (non-recursive)", 
				L"Radix Sort", L"Heap Sort"});
			this->checkedListBox1->Location = System::Drawing::Point(16, 142);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(226, 224);
			this->checkedListBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(23, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 19);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Range=";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point(23, 98);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 19);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Times=";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(90, 28);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"500";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(90, 60);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 5;
			this->textBox2->Text = L"5000";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button1->Location = System::Drawing::Point(16, 392);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(226, 49);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Draw";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(90, 98);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"10";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label3->Location = System::Drawing::Point(55, 26);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(29, 19);
			this->label3->TabIndex = 7;
			this->label3->Text = L"n=";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(943, 620);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->zedGraphControl1);
			this->Name = L"Form1";
			this->Text = L"SortingAlgorithm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double bubble_sort(int *a,int n){
			clock_t start=clock();

			for(int i=n-1; i>0; i--)
				for(int j=1; j<=i; j++)
					if(a[j-1]>a[j]) swap(a[j-1],a[j]);

			clock_t end=clock();
			double time=Math::Round((double)(end-start)/CLK_TCK,6);
			return time;
		}
		double selection_sort(int *a, int n){
			clock_t start=clock();

			for(int i=0; i<n-1; i++){
				int m=i;
				for(int j=i+1; j<n; j++)
					if(a[j]<a[m]) m=j;
				swap(a[i],a[m]);
			}			
			
			clock_t end=clock();
			double time=Math::Round((double)(end-start)/CLK_TCK,6);
			return time;
		}
		double insertion_sort(int *a,int n){
			clock_t start=clock();

			for(int i=1; i<n; i++){
				int target=a[i];
				int j;
				for(j=i; a[j-1]>target && j>0; j--)
					a[j]=a[j-1];
				a[j]=target;
			}

			clock_t end=clock();
			double time=Math::Round((double)(end-start)/CLK_TCK,6);
			return time;
		}	
		double shell_sort(int *a,int n){
			clock_t start=clock();

			for(int h=n/2; h>0; h/=2){
				for(int i=h; i<n; i+=h){
					int target=a[i];
					int j;
					for(j=i; a[j-h]>target && j>0; j-=h)
						a[j]=a[j-h];
					a[j]=target;
				}
			}

			clock_t end=clock();
			double time=Math::Round((double)(end-start)/CLK_TCK,6);
			return time;
		}
		void merge(int* a,int* tmp, int left, int lcount, int right, int rcount){
			int index=left,i=left;
			lcount+=left,rcount+=right;
			while (left<lcount && right<rcount){
				if(a[left]<=a[right]) tmp[index++]=a[left++];
				else tmp[index++]=a[right++];
			}
			while(left<lcount) tmp[index++]=a[left++];
			while(right<rcount) tmp[index++]=a[right++];
			for(; i<index; i++) a[i]=tmp[i];
		}
		void merge_sort_recursive(int* a,int* tmp, int begin, int n){
			if(n<2) return;
			int lcount=n/2,rcount=n-lcount;
			merge_sort_recursive(a,tmp,begin,lcount);
			merge_sort_recursive(a,tmp,begin+lcount,rcount);
			merge(a,tmp,begin,lcount,begin+lcount,rcount);			
		}
		double merge_sort_recursive(int* a,int n){
			clock_t start=clock();

			int* tmp=new int[n];
			merge_sort_recursive(a,tmp,0,n);

			clock_t end=clock();							
			double time=Math::Round((double)(end-start)/CLK_TCK,6);
			return time;
		}
		double merge_sort_non_recursive(int* a,int n){
			clock_t start=clock();

			int* tmp=new int[n];
			for(int i=1; i<n; i*=2)
				for(int j=0; j<n-i; j+=2*i)
					merge(a,tmp,j,i,j+i,min(i,n-j-i));

			clock_t end=clock();							
			double time=Math::Round((double)(end-start)/CLK_TCK,6);
			return time;
		}
		void quick_sort_recursive(int* a, int left, int right){
			if(left<right){
				int i=left+1,j=right-1,targer=a[left];
				do{
					while(a[i]<targer && i<=j) i++;
					while(a[j]>=targer && i<=j) j--;
					if(i<j) swap(a[i],a[j]);
				}while(i<j);
				if(left<j) swap(a[left],a[j]);
				quick_sort_recursive(a,left,j);
				quick_sort_recursive(a,j+1,right);
			}
		}
		double quick_sort_recursive(int* a, int n){
			clock_t start=clock();
			
			quick_sort_recursive(a,0,n);

			clock_t end=clock();							
			double time=Math::Round((double)(end-start)/CLK_TCK,6);
			return time;
		}
		void quick_sort_non_recursive(int* a,int left, int right){
			stack<pair<int,int>> x;
			pair<int,int> t(left,right);
			x.push(t);
			while(!x.empty()){
				t=x.top(); x.pop();
				int left=t.first,right=t.second;
				int i=left+1,j=right-1,target=a[left];
				do{
					while(a[i]<target && i<=j) i++;
					while(a[j]>=target && i<=j) j--;
					if(i<j) swap(a[i],a[j]);
				}while(i<j);
				if(left<j) swap(a[left],a[j]);
				if(left<j) {t.first=left; t.second=j; x.push(t);}
				if(j+1<right) {t.first=j+1; t.second=right; x.push(t);}
			}
		}
		double quick_sort_non_recursive(int* a, int n){
			clock_t start=clock();

			quick_sort_non_recursive(a,0,n);

			clock_t end=clock();							
			double time=Math::Round((double)(end-start)/CLK_TCK,6);
			return time;
		}
		double radix_sort(int* a, int n){
			clock_t start=clock();

			int M=0;
			for(int i=0; i<n; i++) if(a[i]>a[M]) M=i;
			int radix=(int)log10((double)a[M]); //cout<<radix<<endl;
			radix=(int)pow(10.,radix); //cout<<radix<<endl;
			int count[10];
			for(int i=1; i<=radix; i*=10){
				for(int j=0; j<10; j++) count[j]=0;
				for(int j=0; j<n; j++){
					int digit=(a[j]/i)%10;// cout<<digit<<endl;
					count[digit]++;
				}
				int index[10]; index[0]=0;
				for(int j=1; j<10; j++) index[j]=index[j-1]+count[j-1];
				int* tmp=new int[n];
				for(int j=0; j<n; j++){
					int digit=(a[j]/i)%10;
					tmp[index[digit]++]=a[j];		
				}
				for(int j=0; j<n; j++) a[j]=tmp[j];
			}

			clock_t end=clock();							
			double time=Math::Round((double)(end-start)/CLK_TCK,6);
			return time;
		}
		void restore(int* a,int s, int t){
			int i=s,j;
			while(i<=t/2){
				if(a[i*2]<a[i*2+1]) j=i*2;
				else j=i*2+1;
				if(a[i]<a[j]) break;
				swap(a[i],a[j]);
				i=j;
			}
		}
		void heap_sort(int* a, int n, int* tmp){
			for(int i=n/2; i>=1; i--) restore(tmp,i,n);
			int index=0;
			for(int i=n; i>1; i--){
				a[index++]=tmp[1];
				tmp[1]=tmp[i];
				restore(tmp,1,i-1);
			}			
		}
		double heap_sort(int* a, int n){
			clock_t start=clock();

			int* tmp=new int[n+1];
			for(int i=1; i<n+1; i++) tmp[i]=a[i-1];
			heap_sort(a,n+1,tmp);

			clock_t end=clock();							
			double time=Math::Round((double)(end-start)/CLK_TCK,6);
			return time;
		}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {//Draw				 
				 if(textBox1->Text!=String::Empty && textBox2->Text!=String::Empty && textBox3->Text!=String::Empty){
					 int n=int::Parse(textBox1->Text);
					 int range=int::Parse(textBox2->Text);
					 int times=int::Parse(textBox3->Text);
					 int** num=new int*[times]; for(int i=0; i<times; i++) num[i]=new int[(i+1)*n];
					 srand((int)time(NULL));
					 for(int i=0; i<times; i++) for(int j=0; j<n*(i+1); j++) num[i][j]=rand()%range;
					 zedGraphControl1->GraphPane->CurveList->Clear();			 						 
			 
					 for(int i=0; i<checkedListBox1->CheckedItems->Count; i++){
						 switch(checkedListBox1->CheckedIndices[i]){
							case 0:{//Bubble sort
								PointPairList ^list0=gcnew PointPairList();
								LineItem ^myCurve0=zedGraphControl1->GraphPane->AddCurve("Bubble Sort",list0,Color::LightSkyBlue,SymbolType::Diamond);
								myCurve0->Line->Width=2.0F;

								for(int i=0; i<times; i++){
									int* copy=new int[(i+1)*n];
									for(int j=0; j<n*(i+1); j++) copy[j]=num[i][j];
									double time=bubble_sort(copy,n*(i+1));
									list0->Add((i+1)*n,time);
								}
								break;
							}
							case 1:{//Selection sort
								PointPairList ^list1=gcnew PointPairList();
								LineItem ^myCurve1=zedGraphControl1->GraphPane->AddCurve("Selection Sort",list1,Color::DarkRed,SymbolType::Circle);
								myCurve1->Line->Width=2.0F;

								for(int i=0; i<times; i++){
									int* copy=new int[(i+1)*n];
									for(int j=0; j<n*(i+1); j++) copy[j]=num[i][j];
									double time=selection_sort(copy,n*(i+1));
									list1->Add((i+1)*n,time);
								}
								break;
							}
							case 2:{//Insertion sort
								PointPairList ^list2=gcnew PointPairList();
								LineItem ^myCurve2=zedGraphControl1->GraphPane->AddCurve("Insertion Sort",list2,Color::DarkSalmon,SymbolType::XCross);
								myCurve2->Line->Width=2.0F;

								for(int i=0; i<times; i++){
									int* copy=new int[(i+1)*n];
									for(int j=0; j<n*(i+1); j++) copy[j]=num[i][j];
									double time=insertion_sort(copy,n*(i+1));
									list2->Add((i+1)*n,time);
								}
								break;
							}
							case 3:{//Shell sort
								PointPairList ^list3=gcnew PointPairList();
								LineItem ^myCurve3=zedGraphControl1->GraphPane->AddCurve("Shell Sort",list3,Color::CadetBlue,SymbolType::VDash);
								myCurve3->Line->Width=2.0F;

								for(int i=0; i<times; i++){
									int* copy=new int[(i+1)*n];
									for(int j=0; j<n*(i+1); j++) copy[j]=num[i][j];
									double time=shell_sort(copy,n*(i+1));
									list3->Add((i+1)*n,time);
								}
								break;
							}
							case 4:{//Merge sort (recursive)
								PointPairList ^list4=gcnew PointPairList();
								LineItem ^myCurve4=zedGraphControl1->GraphPane->AddCurve("Merge Sort (recursive)",list4,Color::CornflowerBlue,SymbolType::Square);
								myCurve4->Line->Width=2.0F;
					
								for(int i=0; i<times; i++){
									int* copy=new int[(i+1)*n];
									for(int j=0; j<n*(i+1); j++) copy[j]=num[i][j];							
									double time=merge_sort_recursive(copy,n*(i+1));																
									list4->Add((i+1)*n,time);
								}
								break;
								   }
							case 5:{//Merge sort (non-recursive)
								PointPairList ^list5=gcnew PointPairList();
								LineItem ^myCurve5=zedGraphControl1->GraphPane->AddCurve("Merge Sort (non-recursive)",list5,Color::LightSlateGray,SymbolType::Star);
								myCurve5->Line->Width=2.0F;

								for(int i=0; i<times; i++){
									int* copy=new int[(i+1)*n];
									for(int j=0; j<n*(i+1); j++) copy[j]=num[i][j];							
									double time=merge_sort_non_recursive(copy,n*(i+1));																
									list5->Add((i+1)*n,time);
								}
								break;
							}
							case 6:{//Quick sort (recursive)
								PointPairList ^list6=gcnew PointPairList();
								LineItem ^myCurve6=zedGraphControl1->GraphPane->AddCurve("Quick Sort (recursive)",list6,Color::MediumPurple,SymbolType::TriangleDown);
								myCurve6->Line->Width=2.0F;

								for(int i=0; i<times; i++){
									int* copy=new int[(i+1)*n];
									for(int j=0; j<n*(i+1); j++) copy[j]=num[i][j];							
									double time=quick_sort_recursive(copy,n*(i+1));																
									list6->Add((i+1)*n,time);
								}
								break;
							}
							case 7:{//Quick sort (non-recursive)
								PointPairList ^list7=gcnew PointPairList();
								LineItem ^myCurve7=zedGraphControl1->GraphPane->AddCurve("Quick Sort (non-recursive)",list7,Color::ForestGreen,SymbolType::Plus);
								myCurve7->Line->Width=2.0F;

								for(int i=0; i<times; i++){
									int* copy=new int[(i+1)*n];
									for(int j=0; j<n*(i+1); j++) copy[j]=num[i][j];							
									double time=quick_sort_non_recursive(copy,n*(i+1));																
									list7->Add((i+1)*n,time);
								}
								break;
							}	
							case 8:{//Radix sort
								PointPairList ^list8=gcnew PointPairList();
								LineItem ^myCurve8=zedGraphControl1->GraphPane->AddCurve("Radix Sort",list8,Color::LightSteelBlue,SymbolType::UserDefined);
								myCurve8->Line->Width=2.0F;

								for(int i=0; i<times; i++){
									int* copy=new int[(i+1)*n];
									for(int j=0; j<n*(i+1); j++) copy[j]=num[i][j];							
									double time=radix_sort(copy,n*(i+1));																
									list8->Add((i+1)*n,time);
								}
								break;
							}
							case 9:{//Heap sort
								PointPairList ^list9=gcnew PointPairList();
								LineItem ^myCurve9=zedGraphControl1->GraphPane->AddCurve("Heap Sort",list9,Color::MediumVioletRed,SymbolType::Triangle);
								myCurve9->Line->Width=2.0F;

								for(int i=0; i<times; i++){
									int* copy=new int[(i+1)*n];
									for(int j=0; j<n*(i+1); j++) copy[j]=num[i][j];							
									double time=heap_sort(copy,n*(i+1));																
									list9->Add((i+1)*n,time);
								}
								break;
							}				
						 }
					 }
					 
					 //for(int i=0; i<n; i++)list1->Add(n*i,num[i]);
					 zedGraphControl1->AxisChange();
					 zedGraphControl1->Refresh();
				 }
			 }
};
}

