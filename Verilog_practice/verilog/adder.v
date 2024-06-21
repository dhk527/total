

module adder_RTL(
 input [1:0] a, b,
    output [1:0] sum,
     output carr_out;

);

wire and1_out;
wire xor3_out;
wire and2_out, and3_out; // Input, output은 (wire)
// 그러나 중간에 연결되는 위의 4개의 wire는 따로 세팅해줘야함

xor(sum[0],a[0],b[0]);
and
xor
xor
and
and
or (carry_out, and2_out,and3_out);
// schemetic 있어야지 하기 편하다...
endmodule



/*
RTL보다 편할려고 dataflow가 나옴 operators 연산자 표현 시 좋다 and, or, not, etc..
assign 선언문은 절차적이지 않음 dependency는 있음(?)
연산자를 통해 우리는 어떻게 변수가 데이터가 흘러가는지 알 수 있다.
*/

module adder_dataflow(
    input [1:0] a, b,
    output [1:0] sum,
     output carr_out; // 이렇게 너비로 해도된다.
);

/* wire [2:0] sum_3bit;

assign sum_3bit = a+b; // 0,1,2 bit를 주어서 carry_out 일때를 상정한다. 즉 데이터의 움직임을 생각해야한다.
assign sum=sum_3bit[1:0];
assign carry_out=sum_3bit[2];  // 중간 과정으로 원래는 이런식으로 전개해야 한다. 실수많음! */

assign (carry_out,sum) = a+b;  // 훨씬 편하쥬? 이리 해도 된다...
endmodule


/*

절차적 블록에서 잘쓰임
"always" block을 언제나 씀
위의 데이터 플로우 모델링에서는 (tri-reg) 값을 임시 저장이 안됨!
behavior는 value 저장이 됩니다.

*/

module adder_behavior(
    input [1:0] a, b,
    output reg [1:0] sum, 
    output reg carr_out; // reg없으면 procedure block내에서 할당이 될 수 없다.
);

always @* begin //에스터리크 " 조건이 바뀔때마다 동작" 반도체니까 계속 input이 오니까 ㅇㅇ...
   //암튼 이친구는 sequential logic에서 좋다.
    (carry_out,sum)=a+b;
end

endmodule


