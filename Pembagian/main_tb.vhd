--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   13:56:56 03/28/2019
-- Design Name:   
-- Module Name:   D:/Pembagian/main_tb.vhd
-- Project Name:  Pembagian
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: main
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY main_tb IS
END main_tb;
 
ARCHITECTURE behavior OF main_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT main
    PORT(
         a : IN  std_logic_vector(3 downto 0);
         b : IN  std_logic_vector(3 downto 0);
         x : OUT  std_logic_vector(3 downto 0);
         sisa : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal a : std_logic_vector(3 downto 0) := (others => '0');
   signal b : std_logic_vector(3 downto 0) := (others => '0');

 	--Outputs
   signal x : std_logic_vector(3 downto 0);
   signal sisa : std_logic_vector(3 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: main PORT MAP (
          a => a,
          b => b,
          x => x,
          sisa => sisa
        );

   -- Clock process definitions

   -- Stimulus process
   stim_proc: process
   begin		
		wait for 200 ns;
			a(3)<=not a(3);
   end process;
	 stim_proc1: process
   begin		
		wait for 100 ns;
			a(2)<=not a(2);
   end process;
 stim_proc2: process
   begin		
		wait for 50 ns;
			a(1)<=not a(1);
   end process;
	 stim_proc3: process
   begin		
		wait for 25 ns;
			a(0)<=not a(0);
   end process;
	 stim_proc4: process
   begin		
		wait for 1600 ns;
			b(3)<=not b(3);
   end process;
	 stim_proc5: process
   begin		
		wait for 800 ns;
			b(2)<=not b(2);
   end process;
	 stim_proc6: process
   begin		
		wait for 400 ns;
			b(1)<=not b(1);
   end process;
	 stim_proc7: process
   begin		
		wait for 200 ns;
			b(0)<=not b(0);
   end process;
END;
