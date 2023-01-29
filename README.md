# The Algorithm<br>

The Algorithm is what I have used in my embedded systems project by translating from mathematical model equations into syntax. Typically, these algorithms are deployed on systems that require high-level control and precision engineering. This algorithm aims to enhance by obtaining the margin error value from the output by utilizing the sensor, then the margin will be adjusted as feedback to the controller. Then the process will run a close-loop until optimal conditions are achieved by the system. Just information for you, if you want to find the best mathematical model equations, then ***IEEEExplore***, ***Sciencedirect*** and the rest is the best solutions. But, if you want to looking on open source platform, then ***Arxiv*** is the best way.  <br><br><br>

## :large_blue_diamond: ESO Logic<br>

Extended state observer (ESO) is featured with online estimating both the system's states and the total effect of external disturbance as well as nonlinear uncertain dynamics. The original ESO design proposed for the cascade-of-integrator system without measurement noise. In the last years, multifarious modified ESOs have also been developed to handle many engineering systems captured by the models with general nonlinear structure, time-delay, the noises with stochastic properties, and etc. Furthermore, some novel designs of ESO to deal with the estimation problem of uncertain nonlinear systems with time-delay and measurement biases are discussed. We believe this overview will be helpful for practitioners in applications of recent modified ESOs.<br><br>Source:<br><br>:one: X. Zhang, X. Zhang, W. Xue, and B. Xin, “An overview on recent progress of extended state observers for uncertain systems: Methods, theory, and applications,” Advanced Control for Applications, vol. 3, no. 2, Jun. 2021, doi: 10.1002/adc2.89.<br>:two: Y. Zhao, X. Liu, and Q. Zhang, “Predictive Speed-Control Algorithm Based on a Novel Extended-State Observer for PMSM Drives,” Applied Sciences, vol. 9, no. 12, p. 2575, Jun. 2019, doi: 10.3390/app9122575.<br>:three: Y. Huang, Z. W. Luo, M. Svinin, T. Odashima, and S. Hosoe, “Extended state observer based technique for control of robot systems,” IEEE Xplore, Jun. 01, 2002. https://ieeexplore.ieee.org/document/1020036.<br><br><br>

## :large_blue_diamond: TD Logic<br>
A noise-tolerant time-optimal system-based tracking differentiator (TD) was first proposed to construct form of state feedback control for a discrete-time and double integral system. The performances of signal-tracking filtering and differentiation extraction are sensitive to the sampling period. To relax the sensitivity on the sampling period, a time-criterion-based feedback control algorithm is proposed to construct the TD. The control algorithm is derived by comparing the time that the initial state is driven to the switching curve or the origin with any given sampling period. The algorithm's impact parameter setting on filtering is analyzed in the frequency domain. Meanwhile, a compensation scheme is introduced to deal with the trade-off between the filtering ability and phase delay.

Source:<br>

1️⃣ Y. Xie, H. Zhang, L. She, G. Xiao, C. Zhai, and T.-C. Pan, “Design and Implementation of an Efficient Tracking Differentiator,” IEEE Access, vol. 7, pp. 101941–101949, 2019, doi: 10.1109/access.2019.2930963.<br>
2️⃣ X. Zheng, Y. Zhang, M. Yang, X. Liu, and Z. Li, “Substantiations and Numerics of Continuous-Time Linear HTD (Han Tracking Differentiator) and Nonlinear or Unequal-Parameter ZTD (Zhang Time Derivativer) of Order 4,” 2021 33rd Chinese Control and Decision Conference (CCDC), May 2021, doi: 10.1109/ccdc52312.2021.9602171.<br>
3️⃣ H. Zhang et al., “Discrete-Time Optimal Control of Double Integrators and its Application in Maglev Train,” IEEJ Journal of Industry Applications, vol. 11, no. 2, pp. 236–244, Mar. 2022, doi: 10.1541/ieejjia.21005456.<br><br><br>

## :large_blue_diamond: NMPC Logic<br>
The basic of NMPC algorithm for constant reference and continue by formalizing state and control constraints. Viability (or weak forward invariance) of the set of state constraints is introduced and the consequences for the admissibility of the NMPC-feedback law. A streamlined implementation is presented for constrained linear systems. The algorithm is shown to be nominally stabilizing in the presence of constraints provided inconsistent state constraints are relaxed.

Source:<br>

1️⃣ Lalo Magni, Davide Martino Raimondo, and AllgöwerF., Nonlinear model predictive control : towards new challenging applications. Berlin ; Heidelberg: Springer, Cop, 2009.<br>
2️⃣ J. B. Rawlings, E. S. Meadows, and K. R. Muske, “Nonlinear Model Predictive Control: A Tutorial and Survey,” IFAC Proceedings Volumes, vol. 27, no. 2, pp. 185–197, May 1994, doi: 10.1016/s1474-6670(17)48151-1.<br>
3️⃣ L. Grüne and J. Pannek, “Nonlinear Model Predictive Control,” Nonlinear Model Predictive Control, pp. 45–69, Nov. 2016, doi: 10.1007/978-3-319-46024-6_3.<br>
4️⃣ ACADO Toolkit (https://travis-ci.org/acado/acado.png?branch=stable, master),” GitHub, Jan. 18, 2023. https://github.com/acado/acado (accessed Jan. 27, 2023).<br><br><br>

## :large_blue_diamond: Bressenham Logic<br>
The line segment is the basic entity in virtually all computer graphics systems. J.E. Bresenham's algorithm (1965) efficiently scan converts line segments because it requires only an integer addition and a sign test for each pixel generated. It is the standard for scan converting a line segment. Some approaches are used to achieve speedup. There are to parallelize the line generation process, and the rest is to take advantage of the repeated patterns that the algorithm generates.

Source:<br>
1️⃣ J. E. Bresenham, “Algorithm for computer control of a digital plotter,” IBM Systems Journal, vol. 4, no. 1, pp. 25–30, 1965, doi: 10.1147/sj.41.0025.<br>
2️⃣ L. E. Chiang, “3-D CNC trajectory interpolation using Bresenham’s algorithm,” Proceedings of 1994 IEEE International Symposium on Industrial Electronics (ISIE’94), May 1994, doi: 10.1109/isie.1994.333107.<br>
3️⃣ E. Angel and D. Morrison, “Speeding up Bresenham’s algorithm,” IEEE Computer Graphics and Applications, vol. 11, no. 6, pp. 16–17, Nov. 1991, doi: 10.1109/38.103388.<br>
4️⃣ X-W. Liu and K. Cheng, “Three-dimensional extension of Bresenham’s algorithm and its application in straight-line interpolation,” Proceedings of the Institution of Mechanical Engineers, Part B: Journal of Engineering Manufacture, vol. 216, no. 3, pp. 459–463, Mar. 2002, doi: 10.1243/0954405021519979.<br><br><br>

## :large_blue_diamond: Acceleration Logic<br>
The control of acceleration and deceleration of actuators is one of the most key technologies of Precision Engineering development. Acceleration is discontinuous in linear acceleration and deceleration, which caused impact in precision machining. The exponential algorithm has a strong tracking capability but weak stability at higher speed. So a new method was proposed to implement acceleration and deceleration. The algorithm consists of five kinematic stages: increasing acceleration stage, decreasing acceleration stage, constant speed stage, increasing deceleration stage and decreasing deceleration stage.<br>

Source:<br>

1️⃣ D.-I. Kim, J. W. Jeon, and S. Kim, “Software acceleration/deceleration methods for industrial robots and CNC machine tools,” Mechatronics, vol. 4, no. 1, pp. 37–53, Feb. 1994, doi: 10.1016/0957-4158(94)90049-3.<br>
2️⃣ Y. Koren, “Control of Machine Tools,” Journal of Manufacturing Science and Engineering, vol. 119, no. 4B, pp. 749–755, Nov. 1997, doi: 10.1115/1.2836820.<br>
3️⃣ X. Shi, B. Xu, W. Xie, and B. Li, “Design and implementation of S-shape acceleration/deceleration algorithm based on rounding error compensation tactic,” 2008 7th World Congress on Intelligent Control and Automation, no. 10343276, 2008, doi: 10.1109/wcica.2008.4594593.<br>
4️⃣ Zhang, Z., Guo, S., Wang, H., & Deng, S. (2012). A new acceleration and deceleration algorithm and applications. 2012 Second International Conference on Intelligent System Design and Engineering Application. doi:10.1109/isdea.2012.660.<br>
