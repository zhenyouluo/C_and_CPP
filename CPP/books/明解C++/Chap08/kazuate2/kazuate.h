// 猜數字遊戲 (第2版：標頭部份)

void initialize();			// [初始化]  基於現在時間來設定亂數的種
void gen_no();			// [製作問題]  以亂數產生0 ~ max_no 的值������
int judge(int cand);		// [判斷答案]  判斷cand 是否為正確答案
int input();			// [輸入答案]  讓玩家輸入max_no 的值
bool confirm_retry();		// [確認是否繼續]  確認是否再次進行遊戲

extern int max_no;			// 答案的最大值
