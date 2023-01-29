# The Algorithm

The Algorithm is what I have used in my embedded systems project by translating from mathematics model into syntax. Typically, these algorithms are deployed on systems that require high-level control and precision engineering. This algorithm aims to enhance by obtaining the margin error value from the output by utilizing the sensor, then the margin will be adjusted as feedback to the controller. Then the process will run a close-loop until optimal conditions are achieved by the system.<br><br><br>

## :large_blue_diamond: ESO Logic

Extended state observer (ESO) is featured with online estimating both the system's states and the total effect of external disturbance as well as nonlinear uncertain dynamics. The original ESO design proposed for the cascade-of-integrator system without measurement noise. In the last years, multifarious modified ESOs have also been developed to handle many engineering systems captured by the models with general nonlinear structure, time-delay, the noises with stochastic properties, and etc. Furthermore, some novel designs of ESO to deal with the estimation problem of uncertain nonlinear systems with time-delay and measurement biases are discussed. We believe this overview will be helpful for practitioners in applications of recent modified ESOs.<br><br>Source:<br><br>:one: X. Zhang, X. Zhang, W. Xue, and B. Xin, “An overview on recent progress of extended state observers for uncertain systems: Methods, theory, and applications,” Advanced Control for Applications, vol. 3, no. 2, Jun. 2021, doi: 10.1002/adc2.89.<br>:two: Y. Zhao, X. Liu, and Q. Zhang, “Predictive Speed-Control Algorithm Based on a Novel Extended-State Observer for PMSM Drives,” Applied Sciences, vol. 9, no. 12, p. 2575, Jun. 2019, doi: 10.3390/app9122575.<br>:three: Y. Huang, Z. W. Luo, M. Svinin, T. Odashima, and S. Hosoe, “Extended state observer based technique for control of robot systems,” IEEE Xplore, Jun. 01, 2002. https://ieeexplore.ieee.org/document/1020036.<br><br><br>

## :large_blue_diamond: TD Logic
A noise-tolerant time-optimal system-based tracking differentiator (TD) was first proposed to construct form of state feedback control for a discrete-time and double integral system. The performances of signal-tracking filtering and differentiation extraction are sensitive to the sampling period. To relax the sensitivity on the sampling period, a time-criterion-based feedback control algorithm is proposed to construct the TD. The control algorithm is derived by comparing the time that the initial state is driven to the switching curve or the origin with any given sampling period. The algorithm's impact parameter setting on filtering is analyzed in the frequency domain. Meanwhile, a compensation scheme is introduced to deal with the trade-off between the filtering ability and phase delay.

Source:

1️⃣ Y. Xie, H. Zhang, L. She, G. Xiao, C. Zhai, and T.-C. Pan, “Design and Implementation of an Efficient Tracking Differentiator,” IEEE Access, vol. 7, pp. 101941–101949, 2019, doi: 10.1109/access.2019.2930963.
2️⃣ X. Zheng, Y. Zhang, M. Yang, X. Liu, and Z. Li, “Substantiations and Numerics of Continuous-Time Linear HTD (Han Tracking Differentiator) and Nonlinear or Unequal-Parameter ZTD (Zhang Time Derivativer) of Order 4,” 2021 33rd Chinese Control and Decision Conference (CCDC), May 2021, doi: 10.1109/ccdc52312.2021.9602171.
3️⃣ H. Zhang et al., “Discrete-Time Optimal Control of Double Integrators and its Application in Maglev Train,” IEEJ Journal of Industry Applications, vol. 11, no. 2, pp. 236–244, Mar. 2022, doi: 10.1541/ieejjia.21005456.<br><br><br>

## :large_blue_diamond: NMPC Logic
The basic of NMPC algorithm for constant reference and continue by formalizing state and control constraints. Viability (or weak forward invariance) of the set of state constraints is introduced and the consequences for the admissibility of the NMPC-feedback law. A streamlined implementation is presented for constrained linear systems. The algorithm is shown to be nominally stabilizing in the presence of constraints provided inconsistent state constraints are relaxed.

Source:

1️⃣ Lalo Magni, Davide Martino Raimondo, and AllgöwerF., Nonlinear model predictive control : towards new challenging applications. Berlin ; Heidelberg: Springer, Cop, 2009.
2️⃣ J. B. Rawlings, E. S. Meadows, and K. R. Muske, “Nonlinear Model Predictive Control: A Tutorial and Survey,” IFAC Proceedings Volumes, vol. 27, no. 2, pp. 185–197, May 1994, doi: 10.1016/s1474-6670(17)48151-1.
3️⃣ L. Grüne and J. Pannek, “Nonlinear Model Predictive Control,” Nonlinear Model Predictive Control, pp. 45–69, Nov. 2016, doi: 10.1007/978-3-319-46024-6_3.
4️⃣ ACADO Toolkit (https://travis-ci.org/acado/acado.png?branch=stable, master),” GitHub, Jan. 18, 2023. https://github.com/acado/acado (accessed Jan. 27, 2023).
