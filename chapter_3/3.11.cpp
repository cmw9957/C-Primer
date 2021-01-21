//다음에 있는 범위 for는 옳은지 확인하고 그렇다면 c의 타입이 무엇인지 설명한다. 

const string s = "Keep out!";
for(auto &c : s){/* ... */};

옳다. 
c의 타입은 const char &이다.
