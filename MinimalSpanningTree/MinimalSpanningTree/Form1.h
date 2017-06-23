#include <iostream>
#include <ctime>
#include <string>
using namespace std;
#pragma once

namespace MinimalSpanningTree {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	protected: 
	private: System::Windows::Forms::SplitContainer^  splitContainer2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Button^  button4;













	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器
		/// 修改這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->splitContainer2);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->tabControl1);
			this->splitContainer1->Size = System::Drawing::Size(690, 456);
			this->splitContainer1->SplitterDistance = 230;
			this->splitContainer1->TabIndex = 0;
			// 
			// splitContainer2
			// 
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer2->Font = (gcnew System::Drawing::Font(L"Gulim", 8.25F));
			this->splitContainer2->IsSplitterFixed = true;
			this->splitContainer2->Location = System::Drawing::Point(0, 0);
			this->splitContainer2->Name = L"splitContainer2";
			this->splitContainer2->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->groupBox1);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->groupBox2);
			this->splitContainer2->Size = System::Drawing::Size(230, 456);
			this->splitContainer2->SplitterDistance = 229;
			this->splitContainer2->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->groupBox1->Location = System::Drawing::Point(0, 0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(230, 229);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"G(V,E)";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->textBox4->Location = System::Drawing::Point(115, 106);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 25);
			this->textBox4->TabIndex = 34;
			this->textBox4->Text = L"99999";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->textBox3->Location = System::Drawing::Point(116, 77);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 25);
			this->textBox3->TabIndex = 33;
			this->textBox3->Text = L"1000";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->textBox2->Location = System::Drawing::Point(116, 48);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 25);
			this->textBox2->TabIndex = 32;
			this->textBox2->Text = L"1000";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->textBox1->Location = System::Drawing::Point(52, 19);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(74, 25);
			this->textBox1->TabIndex = 31;
			this->textBox1->Text = L"10";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->checkBox1->Location = System::Drawing::Point(15, 183);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(117, 23);
			this->checkBox1->TabIndex = 30;
			this->checkBox1->Text = L"Echo print G";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button1->Location = System::Drawing::Point(15, 140);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(201, 30);
			this->button1->TabIndex = 29;
			this->button1->Text = L"Generate G";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label6->Location = System::Drawing::Point(215, 108);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(14, 19);
			this->label6->TabIndex = 28;
			this->label6->Text = L")";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label5->Location = System::Drawing::Point(11, 108);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(107, 19);
			this->label5->TabIndex = 27;
			this->label5->Text = L"w(e)=MaxInt(";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label4->Location = System::Drawing::Point(11, 79);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(70, 19);
			this->label4->TabIndex = 26;
			this->label4->Text = L"if(w(e))>";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label3->Location = System::Drawing::Point(11, 50);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(103, 19);
			this->label3->TabIndex = 25;
			this->label3->Text = L"range(w(e))=";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point(10, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 19);
			this->label2->TabIndex = 24;
			this->label2->Text = L"|V|=";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->checkBox2);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->groupBox2->Location = System::Drawing::Point(0, 0);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(230, 223);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"MST Solvers";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button4->Location = System::Drawing::Point(14, 175);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(201, 30);
			this->button4->TabIndex = 33;
			this->button4->Text = L"Clear";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->checkBox2->Location = System::Drawing::Point(15, 146);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(205, 23);
			this->checkBox2->TabIndex = 32;
			this->checkBox2->Text = L"Echo print edges in MST";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button3->Location = System::Drawing::Point(14, 101);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(201, 30);
			this->button3->TabIndex = 31;
			this->button3->Text = L"Prim\'s algorithm";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->button2->Location = System::Drawing::Point(15, 53);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(201, 30);
			this->button2->TabIndex = 30;
			this->button2->Text = L"Kruskal\'s algorithm";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(456, 456);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->listBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(448, 427);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"MST found";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// listBox1
			// 
			this->listBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"微軟正黑體", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(136)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 17;
			this->listBox1->Location = System::Drawing::Point(3, 3);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(442, 421);
			this->listBox1->TabIndex = 1;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(448, 427);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Graph in adjacent matrix";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ControlLightLight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->ColumnHeadersVisible = false;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(3, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(442, 421);
			this->dataGridView1->TabIndex = 0;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(690, 456);
			this->Controls->Add(this->splitContainer1);
			this->Name = L"Form1";
			this->Text = L"Finding the minimal spanning tree of a given graph using Kruskal\'s and Prim\'s alg" 
				L"orithms";
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		int **g,edge_count,v,MaxInt,**edges;
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {//Generate G
				 dataGridView1->Rows->Clear(); dataGridView1->Columns->Clear();
				 if(textBox1->Text!=String::Empty && textBox2->Text!=String::Empty && textBox3->Text!=String::Empty && textBox4->Text!=String::Empty){			 
					 v=int::Parse(textBox1->Text);
					 int range=int::Parse(textBox2->Text);
					 int limit=int::Parse(textBox3->Text);
					 MaxInt=int::Parse(textBox4->Text);
					 edge_count=0;

					 g=new int*[v]; for(int i=0; i<v; i++) *(g+i)=new int[v];
					 srand((int)time(NULL));
					 for(int i=0; i<v; i++){
						for(int j=i+1; j<v; j++){
							g[i][j]=rand()%range+1; edge_count++;
							if(g[i][j]>limit){g[i][j]=MaxInt; edge_count--;}
							g[j][i]=g[i][j];
						}
						g[i][i]=MaxInt;
					 }

					 edges=new int*[edge_count+1]; for(int i=0; i<edge_count+1; i++) *(edges+i)=new int[3];
					 edges[edge_count][2]=MaxInt;
					 edge_count=0; 
					 for(int i=0; i<v; i++){
						 for(int j=i+1; j<v; j++){
							 if(g[i][j]!=MaxInt){
								 edges[edge_count][0]=i;
								 edges[edge_count][1]=j;
								 edges[edge_count++][2]=g[i][j];			
							 }
						 }
					 }
					 //listBox1->Items->Add(e);		 
					 
					 //for(int i=0; i<edge_count; i++) listBox1->Items->Add(edges[i][0]+" "+edges[i][1]+" "+edges[i][2]);

					 if(checkBox1->Checked){
						 dataGridView1->RowCount=v; dataGridView1->ColumnCount=v;
						 for(int i=0; i<v; i++){
							 for(int j=0; j<v; j++){
								 dataGridView1->Rows[i]->Cells[j]->Value=g[i][j];
							 }
						 }
					 }
				 }
			 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {//Clear
			 listBox1->Items->Clear();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {//Kruskal's algorithm
			 clock_t start=clock();

			 int *mask=new int[v]; for(int i=0; i<v; mask[i]=i++);
			 int *mst=new int[v-1];
			 bool *selected=new bool[edge_count]; for(int i=0; i<edge_count; selected[i++]=false);
			 int mst_count=0,select_count=0,cycle=0;
			 
			 while(mst_count<v-1 && select_count<edge_count){				 
				 int m=edge_count;
				 for(int i=0; i<edge_count; i++)
					 if(edges[i][2]<edges[m][2] && (!selected[i])) m=i;
				  				 
					if(!selected[m]){
					 	int x=edges[m][0],y=edges[m][1];
						if(mask[x] != mask[y]){
							mst[mst_count++]=m;
							int small=min(mask[x],mask[y]),large=max(mask[x],mask[y]);
							for(int i=0; i<v; i++) if(mask[i]==large) mask[i]=small;
						}
						else cycle++;
					}
					selected[m]=true; select_count++;								 
			 }
			 //for(int i=0; i<edge_count; i++) listBox1->Items->Add(selected[i]);
			 //for(int i=0; i<mst_count; i++) listBox1->Items->Add(mst[i]);
			 //for(int i=0; i<v; i++) listBox1->Items->Add(mask[i]);

			 clock_t end=clock();
			 double time=Math::Round((double)(end-start)/CLK_TCK,6);
			 
			 int cost=0;
			 /*
			 for(int i=0; i<mst_count; i++){
				 if(checkBox2->Checked)
					 listBox1->Items->Add("edge "+(i+1)+": ("+edges[mst[i]][0]+","+edges[mst[i]][1]+") ["+edges[mst[i]][2]+"]");					 
				 cost+=edges[mst[i]][2];
			 }
			 if(checkBox2->Checked) listBox1->Items->Add("#edges incurring cycles: "+cycle);
			 listBox1->Items->Add("Kruskal: ("+mst_count+", "+cost+", "+time+"(sec.))");
			 */
			 if(mst_count == v-1){
				 for(int i=0; i<mst_count; i++){
					 if(checkBox2->Checked)
						 listBox1->Items->Add("edge "+(i+1)+": ("+edges[mst[i]][0]+","+edges[mst[i]][1]+") ["+edges[mst[i]][2]+"]");					 
					 cost+=edges[mst[i]][2];
				 }
				 if(checkBox2->Checked) listBox1->Items->Add("#edges incurring cycles: "+cycle);
				 listBox1->Items->Add("Kruskal: ("+mst_count+", "+cost+", "+time+"(sec.))");
			 }
			 else listBox1->Items->Add("No minimal spanning tree for this case!");

		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {//Prim's algorithm
			 clock_t start=clock();

			 srand(int(time(NULL)));
			 int x=rand()%v;
			 int begin=x;
			 int *c1=new int[v]; for(int i=0; i<v; c1[i++]=x);
			 bool *mark=new bool[v]; for(int i=0; i<v; i++) mark[i]=(i==x) ?true :false;
			 int *c2=new int[v]; for(int i=0; i<v; c2[i++]=MaxInt);
			 //int *mst=new int[v];
			 int x_count=0;			 
			 //listBox1->Items->Add(x);
			 //for(int i=0; i<v; i++)listBox1->Items->Add(mark[i]);
			 //for(int i=0; i<v; i++)listBox1->Items->Add(c1[i]);
			 //for(int i=0; i<v; i++)listBox1->Items->Add(c2[i]);

			 while(x_count<v-1){
				for(int i=0; i<v; i++){
					if(!mark[i] && g[i][x]<c2[i]){
						c1[i]=x;
						c2[i]=g[i][x];
					}
				}

				//for(int i=0; i<v; i++)listBox1->Items->Add(c2[i]);
				//listBox1->Items->Add(" ");

				int m=0;
				for(int i=1; i<v; i++) if(c2[i]<c2[m]) m=i;
				if(c2[m]==MaxInt) break; //no solution
				//mst[x_count++]=c1[m];
				x_count++;
				c2[m]=MaxInt;
				mark[m]=true;
				x=m;
			 }

			 //listBox1->Items->Add(x_count);

			 clock_t end=clock();
			 double time=Math::Round((double)(end-start)/CLK_TCK,6);

			 //for(int i=0,k=0; i<v; i++) listBox1->Items->Add(c1[i]);

			 //for(int i=0; i<v; i++) if(i != begin) mst[i]=c1[i];

			 int cost=0;
			 if(x_count == v-1){
				 for(int i=0,k=0; i<v; i++){
					 if(i==begin) continue;
					 if(checkBox2->Checked)
						listBox1->Items->Add("edge "+(++k)+": ("+i+","+c1[i]+") ["+g[i][c1[i]]+"]");
					 cost+=g[i][c1[i]];
				 }
				 if(checkBox2->Checked) listBox1->Items->Add("starting from vertex: "+begin);
				 listBox1->Items->Add("Prim: ("+(v-1)+", "+cost+", "+time+"(sec.))");
			 }
			 else listBox1->Items->Add("No minimal spanning tree for this case!");
		 }
};
}

