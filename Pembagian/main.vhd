----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:25:47 03/27/2019 
-- Design Name: 
-- Module Name:    main - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_unsigned.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity main is
	port(
		a: in std_logic_vector (3 downto 0);
		b: in std_logic_vector (3 downto 0);
		--p: out std_logic_vector (7 downto 0);
		x: out std_logic_vector (3 downto 0);
		sisa: out std_logic_vector(3 downto 0)
	);
end main;

architecture Behavioral of main is
signal p_temp: std_logic_vector(7 downto 0);
begin
	p_temp<=a*b;
	--p<=p_temp;
	process(p_temp)
	constant denom: std_logic_vector(3 downto 0):="0010";
	variable d, n1: std_logic_vector(4 downto 0);
	variable n2: std_logic_vector(3 downto 0);
	
	begin
		d:='0' & denom;
		n2:=p_temp(3 downto 0);
		n1:='0' & p_temp (7 downto 4);
		for i in 0 to 3 loop
			n1 := n1(3 downto 0)& n2(3);
			n2 := n2(2 downto 0)& '0';
			if n1 >= d then
				n1:=n1-d;
				n2(0):='1';
			end if;
		end loop;
		x <= n2;
		sisa <= n1(3 downto 0);
	end process;
end Behavioral;

