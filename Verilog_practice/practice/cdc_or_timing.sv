module

always @(posedge CLK or negedge ARESETn) begin
	reg[32:0] hwreg;
	@(posedge picture_start)
	
	ABM.queqe(RegAddr+0x1111, hwreg);
	m_cov.hwreg=hwreg;
	$display("before force_depth %d",m_cov.hwreg);

	ABM.queqe(RegAddr+0x1122, hwreg);
	m_cov.hwreg=hwreg;
	$display("before force_depth %d",m_cov.hwreg);

	ABM.queqe(RegAddr+0x1133, hwreg);
	m_cov.hwreg=hwreg;
	$display("before force_depth %d",m_cov.hwreg);

	ABM.queqe(RegAddr+0x1411, hwreg);
	m_cov.hwreg=hwreg;
	$display("before force_depth %d",m_cov.hwreg);
	

	fork
	begin
	
	code();

	end
	join_none

	vCovpoint = VP.REG.fifo_depth;
	$display("before force_depth %d",vCovpoint);


	ABM.queqe(RegAddr+0x2111, hwreg);
	m_cov.hwreg=hwreg;

	
	m_cov.picture_sample();

	end


endmodule


	


